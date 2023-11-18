#pragma once

#ifndef UFSM_H
#define UFSM_H

#include "recursive_macro.h"

#include <stdint.h>

#define _Args(...) __VA_ARGS__
#define STRIP_PARENS(X) X
#define PASS_PARAMETERS(X) STRIP_PARENS(_Args X)

#define COMMA() ,
#define EMPTY()
#define _REMOVE_2_ARGS(__NAME__, __ARGS__, ...) __VA_ARGS__

#define _DECLARE_ENUM_FUNC(_FSM_NAME_, __NAME__, ...) _FSM_NAME_##_STATE_##__NAME__,
#define _DECLARE_ENUM(_FSM_NAME_, ...)                                                            \
    typedef enum _##_FSM_NAME_##_state_t{                                                         \
        _##_FSM_NAME_##_STATE_DUMMY,                                                              \
        EVAL(_FSM_NAME_, _DECLARE_ENUM_FUNC, _REMOVE_2_ARGS, EMPTY, __VA_ARGS__)                  \
            _##_FSM_NAME_##_STATE_MAX} _FSM_NAME_##_state_t;

#define _DECLARE_PROTO_FUNC(_FSM_NAME_, _NAME_, ...)                                              \
    static void _##_FSM_NAME_##_state_##_NAME_##_init(void);                                      \
    static int8_t _##_FSM_NAME_##_state_##_NAME_##_process(void);
#define _DECLARE_PROTOS(_FSM_NAME_, ...)                                                          \
    EVAL(_FSM_NAME_, _DECLARE_PROTO_FUNC, _REMOVE_2_ARGS, EMPTY, __VA_ARGS__)

#define _DECLARE_STATE_DESC_FUNC(_FSM_NAME_, _NAME_, _ARGS_, ...)                                 \
    [_FSM_NAME_##_STATE_##                                                                        \
        _NAME_] = {_##_FSM_NAME_##_state_##_NAME_##_process, PASS_PARAMETERS(_ARGS_)},

#define _DECLARE_STATE_DESC(_FSM_NAME_, ...)                                                      \
    static const state_desc_t _##_FSM_NAME_##_state_desc[_##_FSM_NAME_##_STATE_MAX] = {           \
        EVAL(_FSM_NAME_, _DECLARE_STATE_DESC_FUNC, _REMOVE_2_ARGS, EMPTY, __VA_ARGS__)};

#define DECLARE_FSM(_FSM_NAME_, _INIT_, _GET_TIME_, _RAND_, _LOG_, _LOG_CTX_, ...)                \
    _DECLARE_ENUM(_FSM_NAME_, __VA_ARGS__)                                                        \
    _DECLARE_PROTOS(_FSM_NAME_, __VA_ARGS__)                                                      \
    _DECLARE_STATE_DESC(_FSM_NAME_, __VA_ARGS__)                                                  \
    static ufsm_t _##_FSM_NAME_##_ufsm = {.state = _FSM_NAME_##_STATE_##_INIT_,                   \
                                          .max_state = _##_FSM_NAME_##_STATE_MAX,                 \
                                          .get_time = _GET_TIME_,                                 \
                                          .rand = _RAND_,                                         \
                                          .log = _LOG_,                                           \
                                          .ctx = _LOG_CTX_,                                       \
                                          .desc = _##_FSM_NAME_##_state_desc};

typedef int8_t (*state_process_t)(void);
typedef void (*state_init_t)(void);

typedef struct _state_desc_t
{
    state_process_t process;
    int32_t timeout_min;
    int32_t timeout_max;
    int8_t state_by_timeout;
    state_init_t init;
} state_desc_t;

typedef struct
{
    int8_t state;
    const int8_t max_state;
    int32_t last_time;
    int32_t timeout;
    int32_t (*const get_time)(void);
    int32_t (*const rand)(void);
    void (*const log)(void *ctx, const char *fmt, ...);
    void *const ctx;
    const state_desc_t *const desc;
} ufsm_t;

void ufsm_state_process(ufsm_t *ufsm);

#endif  // UFSM_H
