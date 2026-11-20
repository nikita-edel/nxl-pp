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
# ifndef NXL_PP_ARRAY_REVERSE_H
# define NXL_PP_ARRAY_REVERSE_H
#
# include "nxl/pp/array/data.h"
# include "nxl/pp/array/size.h"
# include "nxl/pp/config/config.h"
# include "nxl/pp/tuple/reverse.h"
#
# /* N_PP_ARRAY_REVERSE */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_ARRAY_REVERSE(array) (N_PP_ARRAY_SIZE(array), N_PP_TUPLE_REVERSE(N_PP_ARRAY_SIZE(array), N_PP_ARRAY_DATA(array)))
# else
#    define N_PP_ARRAY_REVERSE(array) N_PP_ARRAY_REVERSE_I(array)
#    define N_PP_ARRAY_REVERSE_I(array) (N_PP_ARRAY_SIZE(array), N_PP_TUPLE_REVERSE(N_PP_ARRAY_SIZE(array), N_PP_ARRAY_DATA(array)))
# endif
#
# endif
