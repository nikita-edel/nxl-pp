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
# ifndef NXL_PP_REPETITION_ENUM_PARAMS_WITH_A_DEFAULT_H
# define NXL_PP_REPETITION_ENUM_PARAMS_WITH_A_DEFAULT_H
#
# include "nxl/pp/config/config.h"
# include "nxl/pp/facilities/intercept.h"
# include "nxl/pp/repetition/enum_binary_params.h"
#
# /* N_PP_ENUM_PARAMS_WITH_A_DEFAULT */
#
# define N_PP_ENUM_PARAMS_WITH_A_DEFAULT(count, param, def) N_PP_ENUM_BINARY_PARAMS(count, param, = def N_PP_INTERCEPT)
#
# endif
