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
# ifndef NXL_PP_TUPLE_INSERT_H
# define NXL_PP_TUPLE_INSERT_H
#
# include "nxl/pp/config/config.h"
# include "nxl/pp/array/insert.h"
# include "nxl/pp/array/to_tuple.h"
# include "nxl/pp/tuple/to_array.h"
#
# /* N_PP_TUPLE_INSERT */
#
# define N_PP_TUPLE_INSERT(tuple, i, elem) \
    N_PP_ARRAY_TO_TUPLE(N_PP_ARRAY_INSERT(N_PP_TUPLE_TO_ARRAY(tuple), i, elem)) \
/**/
#
# /* N_PP_TUPLE_INSERT_D */
#
# define N_PP_TUPLE_INSERT_D(d, tuple, i, elem) \
    N_PP_ARRAY_TO_TUPLE(N_PP_ARRAY_INSERT_D(d, N_PP_TUPLE_TO_ARRAY(tuple), i, elem)) \
/**/
#
# endif // NXL_PP_TUPLE_INSERT_H
