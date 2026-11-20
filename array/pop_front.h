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
# ifndef NXL_PP_ARRAY_POP_FRONT_H
# define NXL_PP_ARRAY_POP_FRONT_H
#
# include "nxl/pp/arithmetic/dec.h"
# include "nxl/pp/arithmetic/inc.h"
# include "nxl/pp/array/elem.h"
# include "nxl/pp/array/size.h"
# include "nxl/pp/repetition/enum.h"
# include "nxl/pp/repetition/deduce_z.h"
#
# /* N_PP_ARRAY_POP_FRONT */
#
# define N_PP_ARRAY_POP_FRONT(array) N_PP_ARRAY_POP_FRONT_Z(N_PP_DEDUCE_Z(), array)
#
# /* N_PP_ARRAY_POP_FRONT_Z */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_ARRAY_POP_FRONT_Z(z, array) N_PP_ARRAY_POP_FRONT_I(z, N_PP_ARRAY_SIZE(array), array)
# else
#    define N_PP_ARRAY_POP_FRONT_Z(z, array) N_PP_ARRAY_POP_FRONT_Z_D(z, array)
#    define N_PP_ARRAY_POP_FRONT_Z_D(z, array) N_PP_ARRAY_POP_FRONT_I(z, N_PP_ARRAY_SIZE(array), array)
# endif
#
# define N_PP_ARRAY_POP_FRONT_I(z, size, array) (N_PP_DEC(size), (N_PP_ENUM_ ## z(N_PP_DEC(size), N_PP_ARRAY_POP_FRONT_M, array)))
# define N_PP_ARRAY_POP_FRONT_M(z, n, data) N_PP_ARRAY_ELEM(N_PP_INC(n), data)
#
# endif
