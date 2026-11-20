# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2013.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NXL_PP_TUPLE_PUSH_BACK_H
# define NXL_PP_TUPLE_PUSH_BACK_H
#
# include "nxl/pp/config/config.h"
# include "nxl/pp/array/push_back.h"
# include "nxl/pp/array/to_tuple.h"
# include "nxl/pp/tuple/to_array.h"
#
# /* N_PP_TUPLE_PUSH_BACK */
#
# define N_PP_TUPLE_PUSH_BACK(tuple, elem) \
    N_PP_ARRAY_TO_TUPLE(N_PP_ARRAY_PUSH_BACK(N_PP_TUPLE_TO_ARRAY(tuple), elem)) \
/**/
#
# endif // NXL_PP_TUPLE_PUSH_BACK_H
