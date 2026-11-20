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
# ifndef NXL_PP_LOGICAL_OR_H
# define NXL_PP_LOGICAL_OR_H
#
# include "nxl/pp/config/config.h"
# include "nxl/pp/logical/bool.h"
# include "nxl/pp/logical/bitor.h"
#
# /* N_PP_OR */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_OR(p, q) N_PP_BITOR(N_PP_BOOL(p), N_PP_BOOL(q))
# else
#    define N_PP_OR(p, q) N_PP_OR_I(p, q)
#    define N_PP_OR_I(p, q) N_PP_BITOR(N_PP_BOOL(p), N_PP_BOOL(q))
# endif
#
# endif
