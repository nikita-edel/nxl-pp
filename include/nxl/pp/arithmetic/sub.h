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
# /* Revised by Edward Diener (2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NXL_PP_ARITHMETIC_SUB_H
# define NXL_PP_ARITHMETIC_SUB_H
#
# include "nxl/pp/config/config.h"
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#
# include "nxl/pp/arithmetic/dec.h"
# include "nxl/pp/control/while.h"
# include "nxl/pp/tuple/elem.h"
#
# /* N_PP_SUB */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SUB(x, y) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE(N_PP_SUB_P, N_PP_SUB_O, (x, y)))
# else
#    define N_PP_SUB(x, y) N_PP_SUB_I(x, y)
#    define N_PP_SUB_I(x, y) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE(N_PP_SUB_P, N_PP_SUB_O, (x, y)))
# endif
#
# define N_PP_SUB_P(d, xy) N_PP_TUPLE_ELEM(2, 1, xy)
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MWCC()
#    define N_PP_SUB_O(d, xy) N_PP_SUB_O_I xy
# else
#    define N_PP_SUB_O(d, xy) N_PP_SUB_O_I(N_PP_TUPLE_ELEM(2, 0, xy), N_PP_TUPLE_ELEM(2, 1, xy))
# endif
#
# define N_PP_SUB_O_I(x, y) (N_PP_DEC(x), N_PP_DEC(y))
#
# /* N_PP_SUB_D */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SUB_D(d, x, y) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE_ ## d(N_PP_SUB_P, N_PP_SUB_O, (x, y)))
# else
#    define N_PP_SUB_D(d, x, y) N_PP_SUB_D_I(d, x, y)
#    define N_PP_SUB_D_I(d, x, y) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE_ ## d(N_PP_SUB_P, N_PP_SUB_O, (x, y)))
# endif
#
# else
#
# include "nxl/pp/arithmetic/dec.h"
# include "nxl/pp/control/iif.h"
# include "nxl/pp/control/while.h"
# include "nxl/pp/facilities/identity.h"
# include "nxl/pp/logical/and.h"
# include "nxl/pp/logical/bitor.h"
# include "nxl/pp/tuple/elem.h"
# include "nxl/pp/arithmetic/detail/is_maximum_number.h"
# include "nxl/pp/arithmetic/detail/is_minimum_number.h"
#
# /* N_PP_SUB */
#
#    define N_PP_SUB(x, y) N_PP_IIF(N_PP_BITOR(N_PP_DETAIL_IS_MAXIMUM_NUMBER(y),N_PP_DETAIL_IS_MINIMUM_NUMBER(x)),N_PP_IDENTITY_N(0,2),N_PP_SUB_DO)(x,y)
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SUB_DO(x, y) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE(N_PP_SUB_P, N_PP_SUB_O, (x, y)))
# else
#    define N_PP_SUB_DO(x, y) N_PP_SUB_I(x, y)
#    define N_PP_SUB_I(x, y) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE(N_PP_SUB_P, N_PP_SUB_O, (x, y)))
# endif
#
# define N_PP_SUB_P(d, xy) N_PP_AND(N_PP_TUPLE_ELEM(2, 1, xy),N_PP_TUPLE_ELEM(2, 0, xy))
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_MWCC()
#    define N_PP_SUB_O(d, xy) N_PP_SUB_O_I xy
# else
#    define N_PP_SUB_O(d, xy) N_PP_SUB_O_I(N_PP_TUPLE_ELEM(2, 0, xy), N_PP_TUPLE_ELEM(2, 1, xy))
# endif
#
# define N_PP_SUB_O_I(x, y) (N_PP_DEC(x), N_PP_DEC(y))
#
# /* N_PP_SUB_D */
#
#    define N_PP_SUB_D(d, x, y) N_PP_IIF(N_PP_BITOR(N_PP_DETAIL_IS_MAXIMUM_NUMBER(y),N_PP_DETAIL_IS_MINIMUM_NUMBER(x)),N_PP_IDENTITY_N(0,3),N_PP_SUB_DO_D)(d,x,y)
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SUB_DO_D(d, x, y) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE_ ## d(N_PP_SUB_P, N_PP_SUB_O, (x, y)))
# else
#    define N_PP_SUB_DO_D(d, x, y) N_PP_SUB_D_I(d, x, y)
#    define N_PP_SUB_D_I(d, x, y) N_PP_TUPLE_ELEM(2, 0, N_PP_WHILE_ ## d(N_PP_SUB_P, N_PP_SUB_O, (x, y)))
# endif
#
# endif
#
# endif
