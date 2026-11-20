# /* Copyright (C) 2001
#  * Housemarque Oy
#  * http://www.housemarque.com
#  *
#  * Distributed under the Boost Software License, Version 1.0. (See
#  * accompanying file LICENSE_1_0.txt or copy at
#  * http://www.boost.org/LICENSE_1_0.txt)
#  */
#
# /* Revised by Paul Mensonides (2002) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NXL_PP_COMPARISON_LESS_H
# define NXL_PP_COMPARISON_LESS_H
#
# include "nxl/pp/comparison/less_equal.h"
# include "nxl/pp/comparison/not_equal.h"
# include "nxl/pp/config/config.h"
# include "nxl/pp/control/iif.h"
# include "nxl/pp/logical/bitand.h"
# include "nxl/pp/tuple/eat.h"
#
# /* N_PP_LESS */
#
# if N_PP_CONFIG_FLAGS() & (N_PP_CONFIG_MWCC() | N_PP_CONFIG_DMC())
#    define N_PP_LESS(x, y) N_PP_BITAND(N_PP_NOT_EQUAL(x, y), N_PP_LESS_EQUAL(x, y))
# elif ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LESS(x, y) N_PP_IIF(N_PP_NOT_EQUAL(x, y), N_PP_LESS_EQUAL, 0 N_PP_TUPLE_EAT_2)(x, y)
# else
#    define N_PP_LESS(x, y) N_PP_LESS_I(x, y)
#    define N_PP_LESS_I(x, y) N_PP_IIF(N_PP_NOT_EQUAL(x, y), N_PP_LESS_EQUAL, 0 N_PP_TUPLE_EAT_2)(x, y)
# endif
#
# /* N_PP_LESS_D */
#
# if N_PP_CONFIG_FLAGS() & (N_PP_CONFIG_MWCC() | N_PP_CONFIG_DMC())
#    define N_PP_LESS_D(d, x, y) N_PP_BITAND(N_PP_NOT_EQUAL(x, y), N_PP_LESS_EQUAL_D(d, x, y))
# elif ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_LESS_D(d, x, y) N_PP_IIF(N_PP_NOT_EQUAL(x, y), N_PP_LESS_EQUAL_D, 0 N_PP_TUPLE_EAT_3)(d, x, y)
# else
#    define N_PP_LESS_D(d, x, y) N_PP_LESS_D_I(d, x, y)
#    define N_PP_LESS_D_I(d, x, y) N_PP_IIF(N_PP_NOT_EQUAL(x, y), N_PP_LESS_EQUAL_D, 0 N_PP_TUPLE_EAT_3)(d, x, y)
# endif
#
# endif
