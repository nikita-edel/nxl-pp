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
# ifndef NXL_PP_TUPLE_REPLACE_H
# define NXL_PP_TUPLE_REPLACE_H
#
# include "nxl/pp/config/config.h"
# include "nxl/pp/array/replace.h"
# include "nxl/pp/array/to_tuple.h"
# include "nxl/pp/tuple/to_array.h"
#
# /* N_PP_TUPLE_REPLACE */
#
# define N_PP_TUPLE_REPLACE(tuple, i, elem) \
    N_PP_ARRAY_TO_TUPLE(N_PP_ARRAY_REPLACE(N_PP_TUPLE_TO_ARRAY(tuple), i, elem)) \
/**/
#
# /* N_PP_TUPLE_REPLACE_D */
#
# define N_PP_TUPLE_REPLACE_D(d, tuple, i, elem) \
    N_PP_ARRAY_TO_TUPLE(N_PP_ARRAY_REPLACE_D(d, N_PP_TUPLE_TO_ARRAY(tuple), i, elem)) \
/**/
#
# endif // NXL_PP_TUPLE_REPLACE_H
