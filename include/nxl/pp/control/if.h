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
# ifndef NXL_PP_CONTROL_IF_H
# define NXL_PP_CONTROL_IF_H
#
# include "nxl/pp/config/config.h"
# include "nxl/pp/control/iif.h"
# include "nxl/pp/logical/bool.h"
#
# /* N_PP_IF */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_IF(cond, t, f) N_PP_IIF(N_PP_BOOL(cond), t, f)
# else
#    define N_PP_IF(cond, t, f) N_PP_IF_I(cond, t, f)
#    define N_PP_IF_I(cond, t, f) N_PP_IIF(N_PP_BOOL(cond), t, f)
# endif
#
# endif
