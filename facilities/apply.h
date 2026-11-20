# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NXL_PP_FACILITIES_APPLY_H
# define NXL_PP_FACILITIES_APPLY_H
#
# include "nxl/pp/config/config.h"
# include "nxl/pp/control/expr_iif.h"
# include "nxl/pp/detail/is_unary.h"
# include "nxl/pp/tuple/rem.h"
#
# /* N_PP_APPLY */
#
# if N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_APPLY(x) N_PP_APPLY_I(x)
#    define N_PP_APPLY_I(x) N_PP_EXPR_IIF(N_PP_IS_UNARY(x), N_PP_TUPLE_REM_1 x)
# elif N_PP_CONFIG_FLAGS() & N_PP_CONFIG_BCC()
#    define N_PP_APPLY(x) N_PP_APPLY_I(x)
#    define N_PP_APPLY_I(x) N_PP_APPLY_ ## x
#    define N_PP_APPLY_(x) x
#    define N_PP_APPLY_N_PP_NIL
# else
#    define N_PP_APPLY(x) N_PP_EXPR_IIF(N_PP_IS_UNARY(x), N_PP_TUPLE_REM_1 x)
# endif
#
# endif
