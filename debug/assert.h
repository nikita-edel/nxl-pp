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
# ifndef NXL_PP_DEBUG_ASSERT_H
# define NXL_PP_DEBUG_ASSERT_H
#
# include "nxl/pp/config/config.h"
# include "nxl/pp/control/expr_iif.h"
# include "nxl/pp/control/iif.h"
# include "nxl/pp/logical/not.h"
# include "nxl/pp/tuple/eat.h"
#
# /* N_PP_ASSERT */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_ASSERT N_PP_ASSERT_D
# else
#    define N_PP_ASSERT(cond) N_PP_ASSERT_D(cond)
# endif
#
# define N_PP_ASSERT_D(cond) N_PP_IIF(N_PP_NOT(cond), N_PP_ASSERT_ERROR, N_PP_TUPLE_EAT_1)(...)
# define N_PP_ASSERT_ERROR(x, y, z)
#
# /* N_PP_ASSERT_MSG */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_ASSERT_MSG N_PP_ASSERT_MSG_D
# else
#    define N_PP_ASSERT_MSG(cond, msg) N_PP_ASSERT_MSG_D(cond, msg)
# endif
#
# define N_PP_ASSERT_MSG_D(cond, msg) N_PP_EXPR_IIF(N_PP_NOT(cond), msg)
#
# endif
