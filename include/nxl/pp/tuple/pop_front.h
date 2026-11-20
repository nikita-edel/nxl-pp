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
# ifndef NXL_PP_TUPLE_POP_FRONT_H
# define NXL_PP_TUPLE_POP_FRONT_H
#
# include "nxl/pp/config/config.h"
# include "nxl/pp/array/pop_front.h"
# include "nxl/pp/array/to_tuple.h"
# include "nxl/pp/comparison/greater.h"
# include "nxl/pp/control/iif.h"
# include "nxl/pp/tuple/size.h"
# include "nxl/pp/tuple/to_array.h"
#
#
# /* N_PP_TUPLE_POP_FRONT */
#
# define N_PP_TUPLE_POP_FRONT(tuple) \
    N_PP_IIF \
        ( \
        N_PP_GREATER(N_PP_TUPLE_SIZE(tuple),1), \
        N_PP_TUPLE_POP_FRONT_EXEC, \
        N_PP_TUPLE_POP_FRONT_RETURN \
        ) \
    (tuple) \
/**/
#
# define N_PP_TUPLE_POP_FRONT_EXEC(tuple) \
    N_PP_ARRAY_TO_TUPLE(N_PP_ARRAY_POP_FRONT(N_PP_TUPLE_TO_ARRAY(tuple))) \
/**/
#
# define N_PP_TUPLE_POP_FRONT_RETURN(tuple) tuple
#
# /* N_PP_TUPLE_POP_FRONT_Z */
#
# define N_PP_TUPLE_POP_FRONT_Z(z, tuple) \
    N_PP_IIF \
        ( \
        N_PP_GREATER(N_PP_TUPLE_SIZE(tuple),1), \
        N_PP_TUPLE_POP_FRONT_Z_EXEC, \
        N_PP_TUPLE_POP_FRONT_Z_RETURN \
        ) \
    (z, tuple) \
/**/
#
# define N_PP_TUPLE_POP_FRONT_Z_EXEC(z, tuple) \
    N_PP_ARRAY_TO_TUPLE(N_PP_ARRAY_POP_FRONT_Z(z, N_PP_TUPLE_TO_ARRAY(tuple))) \
/**/
#
# define N_PP_TUPLE_POP_FRONT_Z_RETURN(z, tuple) tuple
#
# endif // NXL_PP_TUPLE_POP_FRONT_H
