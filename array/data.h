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
# ifndef NXL_PP_ARRAY_DATA_H
# define NXL_PP_ARRAY_DATA_H
#
# include "nxl/pp/config/config.h"
# include "nxl/pp/tuple/elem.h"
#
# /* N_PP_ARRAY_DATA */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_ARRAY_DATA(array) N_PP_TUPLE_ELEM(2, 1, array)
# else
#    define N_PP_ARRAY_DATA(array) N_PP_ARRAY_DATA_I(array)
#    define N_PP_ARRAY_DATA_I(array) N_PP_ARRAY_DATA_II array
#    define N_PP_ARRAY_DATA_II(size, data) data
# endif
#
# endif
