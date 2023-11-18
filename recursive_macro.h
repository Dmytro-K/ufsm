#pragma once

#ifndef RECURSIVE_MACRO_H
#define RECURSIVE_MACRO_H

#define EVAL100(args, func, form_args, ending, ...)                                               \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL101_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL100_I(args, func, form_args, ending, ...)                                             \
__VA_OPT__(ending() EVAL100(args, func, form_args, ending, __VA_ARGS__))
#define EVAL99(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL100_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL99_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL99(args, func, form_args, ending, __VA_ARGS__))
#define EVAL98(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL99_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL98_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL98(args, func, form_args, ending, __VA_ARGS__))
#define EVAL97(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL98_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL97_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL97(args, func, form_args, ending, __VA_ARGS__))
#define EVAL96(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL97_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL96_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL96(args, func, form_args, ending, __VA_ARGS__))
#define EVAL95(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL96_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL95_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL95(args, func, form_args, ending, __VA_ARGS__))
#define EVAL94(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL95_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL94_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL94(args, func, form_args, ending, __VA_ARGS__))
#define EVAL93(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL94_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL93_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL93(args, func, form_args, ending, __VA_ARGS__))
#define EVAL92(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL93_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL92_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL92(args, func, form_args, ending, __VA_ARGS__))
#define EVAL91(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL92_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL91_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL91(args, func, form_args, ending, __VA_ARGS__))
#define EVAL90(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL91_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL90_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL90(args, func, form_args, ending, __VA_ARGS__))
#define EVAL89(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL90_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL89_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL89(args, func, form_args, ending, __VA_ARGS__))
#define EVAL88(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL89_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL88_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL88(args, func, form_args, ending, __VA_ARGS__))
#define EVAL87(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL88_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL87_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL87(args, func, form_args, ending, __VA_ARGS__))
#define EVAL86(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL87_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL86_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL86(args, func, form_args, ending, __VA_ARGS__))
#define EVAL85(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL86_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL85_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL85(args, func, form_args, ending, __VA_ARGS__))
#define EVAL84(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL85_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL84_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL84(args, func, form_args, ending, __VA_ARGS__))
#define EVAL83(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL84_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL83_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL83(args, func, form_args, ending, __VA_ARGS__))
#define EVAL82(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL83_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL82_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL82(args, func, form_args, ending, __VA_ARGS__))
#define EVAL81(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL82_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL81_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL81(args, func, form_args, ending, __VA_ARGS__))
#define EVAL80(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL81_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL80_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL80(args, func, form_args, ending, __VA_ARGS__))
#define EVAL79(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL80_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL79_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL79(args, func, form_args, ending, __VA_ARGS__))
#define EVAL78(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL79_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL78_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL78(args, func, form_args, ending, __VA_ARGS__))
#define EVAL77(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL78_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL77_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL77(args, func, form_args, ending, __VA_ARGS__))
#define EVAL76(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL77_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL76_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL76(args, func, form_args, ending, __VA_ARGS__))
#define EVAL75(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL76_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL75_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL75(args, func, form_args, ending, __VA_ARGS__))
#define EVAL74(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL75_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL74_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL74(args, func, form_args, ending, __VA_ARGS__))
#define EVAL73(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL74_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL73_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL73(args, func, form_args, ending, __VA_ARGS__))
#define EVAL72(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL73_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL72_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL72(args, func, form_args, ending, __VA_ARGS__))
#define EVAL71(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL72_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL71_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL71(args, func, form_args, ending, __VA_ARGS__))
#define EVAL70(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL71_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL70_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL70(args, func, form_args, ending, __VA_ARGS__))
#define EVAL69(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL70_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL69_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL69(args, func, form_args, ending, __VA_ARGS__))
#define EVAL68(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL69_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL68_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL68(args, func, form_args, ending, __VA_ARGS__))
#define EVAL67(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL68_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL67_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL67(args, func, form_args, ending, __VA_ARGS__))
#define EVAL66(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL67_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL66_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL66(args, func, form_args, ending, __VA_ARGS__))
#define EVAL65(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL66_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL65_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL65(args, func, form_args, ending, __VA_ARGS__))
#define EVAL64(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL65_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL64_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL64(args, func, form_args, ending, __VA_ARGS__))
#define EVAL63(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL64_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL63_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL63(args, func, form_args, ending, __VA_ARGS__))
#define EVAL62(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL63_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL62_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL62(args, func, form_args, ending, __VA_ARGS__))
#define EVAL61(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL62_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL61_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL61(args, func, form_args, ending, __VA_ARGS__))
#define EVAL60(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL61_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL60_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL60(args, func, form_args, ending, __VA_ARGS__))
#define EVAL59(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL60_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL59_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL59(args, func, form_args, ending, __VA_ARGS__))
#define EVAL58(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL59_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL58_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL58(args, func, form_args, ending, __VA_ARGS__))
#define EVAL57(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL58_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL57_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL57(args, func, form_args, ending, __VA_ARGS__))
#define EVAL56(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL57_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL56_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL56(args, func, form_args, ending, __VA_ARGS__))
#define EVAL55(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL56_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL55_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL55(args, func, form_args, ending, __VA_ARGS__))
#define EVAL54(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL55_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL54_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL54(args, func, form_args, ending, __VA_ARGS__))
#define EVAL53(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL54_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL53_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL53(args, func, form_args, ending, __VA_ARGS__))
#define EVAL52(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL53_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL52_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL52(args, func, form_args, ending, __VA_ARGS__))
#define EVAL51(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL52_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL51_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL51(args, func, form_args, ending, __VA_ARGS__))
#define EVAL50(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL51_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL50_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL50(args, func, form_args, ending, __VA_ARGS__))
#define EVAL49(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL50_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL49_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL49(args, func, form_args, ending, __VA_ARGS__))
#define EVAL48(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL49_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL48_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL48(args, func, form_args, ending, __VA_ARGS__))
#define EVAL47(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL48_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL47_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL47(args, func, form_args, ending, __VA_ARGS__))
#define EVAL46(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL47_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL46_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL46(args, func, form_args, ending, __VA_ARGS__))
#define EVAL45(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL46_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL45_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL45(args, func, form_args, ending, __VA_ARGS__))
#define EVAL44(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL45_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL44_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL44(args, func, form_args, ending, __VA_ARGS__))
#define EVAL43(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL44_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL43_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL43(args, func, form_args, ending, __VA_ARGS__))
#define EVAL42(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL43_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL42_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL42(args, func, form_args, ending, __VA_ARGS__))
#define EVAL41(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL42_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL41_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL41(args, func, form_args, ending, __VA_ARGS__))
#define EVAL40(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL41_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL40_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL40(args, func, form_args, ending, __VA_ARGS__))
#define EVAL39(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL40_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL39_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL39(args, func, form_args, ending, __VA_ARGS__))
#define EVAL38(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL39_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL38_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL38(args, func, form_args, ending, __VA_ARGS__))
#define EVAL37(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL38_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL37_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL37(args, func, form_args, ending, __VA_ARGS__))
#define EVAL36(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL37_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL36_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL36(args, func, form_args, ending, __VA_ARGS__))
#define EVAL35(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL36_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL35_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL35(args, func, form_args, ending, __VA_ARGS__))
#define EVAL34(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL35_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL34_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL34(args, func, form_args, ending, __VA_ARGS__))
#define EVAL33(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL34_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL33_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL33(args, func, form_args, ending, __VA_ARGS__))
#define EVAL32(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL33_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL32_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL32(args, func, form_args, ending, __VA_ARGS__))
#define EVAL31(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL32_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL31_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL31(args, func, form_args, ending, __VA_ARGS__))
#define EVAL30(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL31_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL30_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL30(args, func, form_args, ending, __VA_ARGS__))
#define EVAL29(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL30_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL29_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL29(args, func, form_args, ending, __VA_ARGS__))
#define EVAL28(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL29_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL28_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL28(args, func, form_args, ending, __VA_ARGS__))
#define EVAL27(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL28_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL27_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL27(args, func, form_args, ending, __VA_ARGS__))
#define EVAL26(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL27_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL26_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL26(args, func, form_args, ending, __VA_ARGS__))
#define EVAL25(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL26_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL25_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL25(args, func, form_args, ending, __VA_ARGS__))
#define EVAL24(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL25_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL24_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL24(args, func, form_args, ending, __VA_ARGS__))
#define EVAL23(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL24_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL23_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL23(args, func, form_args, ending, __VA_ARGS__))
#define EVAL22(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL23_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL22_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL22(args, func, form_args, ending, __VA_ARGS__))
#define EVAL21(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL22_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL21_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL21(args, func, form_args, ending, __VA_ARGS__))
#define EVAL20(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL21_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL20_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL20(args, func, form_args, ending, __VA_ARGS__))
#define EVAL19(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL20_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL19_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL19(args, func, form_args, ending, __VA_ARGS__))
#define EVAL18(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL19_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL18_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL18(args, func, form_args, ending, __VA_ARGS__))
#define EVAL17(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL18_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL17_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL17(args, func, form_args, ending, __VA_ARGS__))
#define EVAL16(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL17_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL16_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL16(args, func, form_args, ending, __VA_ARGS__))
#define EVAL15(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL16_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL15_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL15(args, func, form_args, ending, __VA_ARGS__))
#define EVAL14(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL15_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL14_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL14(args, func, form_args, ending, __VA_ARGS__))
#define EVAL13(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL14_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL13_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL13(args, func, form_args, ending, __VA_ARGS__))
#define EVAL12(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL13_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL12_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL12(args, func, form_args, ending, __VA_ARGS__))
#define EVAL11(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL12_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL11_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL11(args, func, form_args, ending, __VA_ARGS__))
#define EVAL10(args, func, form_args, ending, ...)                                                \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL11_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL10_I(args, func, form_args, ending, ...)                                              \
__VA_OPT__(ending() EVAL10(args, func, form_args, ending, __VA_ARGS__))
#define EVAL9(args, func, form_args, ending, ...)                                                 \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL10_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL9_I(args, func, form_args, ending, ...)                                               \
__VA_OPT__(ending() EVAL9(args, func, form_args, ending, __VA_ARGS__))
#define EVAL8(args, func, form_args, ending, ...)                                                 \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL9_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL8_I(args, func, form_args, ending, ...)                                               \
__VA_OPT__(ending() EVAL8(args, func, form_args, ending, __VA_ARGS__))
#define EVAL7(args, func, form_args, ending, ...)                                                 \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL8_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL7_I(args, func, form_args, ending, ...)                                               \
__VA_OPT__(ending() EVAL7(args, func, form_args, ending, __VA_ARGS__))
#define EVAL6(args, func, form_args, ending, ...)                                                 \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL7_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL6_I(args, func, form_args, ending, ...)                                               \
__VA_OPT__(ending() EVAL6(args, func, form_args, ending, __VA_ARGS__))
#define EVAL5(args, func, form_args, ending, ...)                                                 \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL6_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL5_I(args, func, form_args, ending, ...)                                               \
__VA_OPT__(ending() EVAL5(args, func, form_args, ending, __VA_ARGS__))
#define EVAL4(args, func, form_args, ending, ...)                                                 \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL5_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL4_I(args, func, form_args, ending, ...)                                               \
__VA_OPT__(ending() EVAL4(args, func, form_args, ending, __VA_ARGS__))
#define EVAL3(args, func, form_args, ending, ...)                                                 \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL4_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL3_I(args, func, form_args, ending, ...)                                               \
__VA_OPT__(ending() EVAL3(args, func, form_args, ending, __VA_ARGS__))
#define EVAL2(args, func, form_args, ending, ...)                                                 \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL3_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL2_I(args, func, form_args, ending, ...)                                               \
__VA_OPT__(ending() EVAL2(args, func, form_args, ending, __VA_ARGS__))
#define EVAL1(args, func, form_args, ending, ...)                                                 \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL2_I(args, func, form_args, ending, form_args(__VA_ARGS__)))
#define EVAL1_I(args, func, form_args, ending, ...)                                               \
__VA_OPT__(ending() EVAL1(args, func, form_args, ending, __VA_ARGS__))
#define EVAL(args, func, form_args, ending, ...)                                                  \
__VA_OPT__(func(args, __VA_ARGS__)                                                            \
           EVAL1_I(args, func, form_args, ending, form_args(__VA_ARGS__)))

#endif  // RECURSIVE_MACRO_H
