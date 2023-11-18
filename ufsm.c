#include <stddef.h>

#include "ufsm.h"

void ufsm_change_state(ufsm_t *ufsm)
{
    const state_desc_t *new_desc = &ufsm->desc[ufsm->state];
    if ((0 == new_desc->timeout_max) || ((0 == new_desc->state_by_timeout)))
    {
        ufsm->timeout = 0;
        ufsm->last_time = ufsm->get_time();
    }
    else if (new_desc->timeout_max == new_desc->timeout_min)
    {
        ufsm->timeout = new_desc->timeout_max;
        ufsm->last_time = ufsm->get_time();
    }
    else
    {
        ufsm->timeout =
            new_desc->timeout_min + ufsm->rand() % (new_desc->timeout_max - new_desc->timeout_min);
        ufsm->last_time = ufsm->get_time();
    }

    if (NULL != new_desc->init)
    {
        new_desc->init();
    }
}

#define UFSM_CHANGE_STATE(ufsm, state_var, new_state)                                             \
    {                                                                                             \
        ufsm->log(ufsm->ctx, "State %d %d -> %d", __LINE__, state_var, new_state);                \
        state_var = new_state;                                                                    \
        ufsm_change_state(ufsm);                                                                  \
    }

void ufsm_state_process(ufsm_t *ufsm)
{
    const state_desc_t *desc = &ufsm->desc[ufsm->state];
    uint8_t new_state = desc->process();
    if (0 != new_state)
    {
        if (ufsm->max_state == new_state)
        {
            if (0 != ufsm->timeout)
            {
                ufsm->last_time = ufsm->get_time();
            }
        }
        else
        {
            UFSM_CHANGE_STATE(ufsm, ufsm->state, new_state);
        }
    }
    else
    {
        if (0 != ufsm->timeout)
        {
            if (ufsm->get_time() - ufsm->last_time > ufsm->timeout)
            {
                UFSM_CHANGE_STATE(ufsm, ufsm->state, desc->state_by_timeout);
            }
        }
    }
}
