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
# ifndef NXL_PP_SEQ_CAT_H
# define NXL_PP_SEQ_CAT_H
#
# include "nxl/pp/arithmetic/dec.h"
# include "nxl/pp/config/config.h"
# include "nxl/pp/control/if.h"
# include "nxl/pp/seq/fold_left.h"
# include "nxl/pp/seq/seq.h"
# include "nxl/pp/seq/size.h"
# include "nxl/pp/tuple/eat.h"
#
# /* N_PP_SEQ_CAT */
#
# define N_PP_SEQ_CAT(seq) \
    N_PP_IF( \
        N_PP_DEC(N_PP_SEQ_SIZE(seq)), \
        N_PP_SEQ_CAT_I, \
        N_PP_SEQ_HEAD \
    )(seq) \
    /**/
# define N_PP_SEQ_CAT_I(seq) N_PP_SEQ_FOLD_LEFT(N_PP_SEQ_CAT_O, N_PP_SEQ_HEAD(seq), N_PP_SEQ_TAIL(seq))
#
# define N_PP_SEQ_CAT_O(s, st, elem) N_PP_SEQ_CAT_O_I(st, elem)
# define N_PP_SEQ_CAT_O_I(a, b) a ## b
#
# /* N_PP_SEQ_CAT_S */
#
# define N_PP_SEQ_CAT_S(s, seq) \
    N_PP_IF( \
        N_PP_DEC(N_PP_SEQ_SIZE(seq)), \
        N_PP_SEQ_CAT_S_I_A, \
        N_PP_SEQ_CAT_S_I_B \
    )(s, seq) \
    /**/
# define N_PP_SEQ_CAT_S_I_A(s, seq) N_PP_SEQ_FOLD_LEFT_ ## s(N_PP_SEQ_CAT_O, N_PP_SEQ_HEAD(seq), N_PP_SEQ_TAIL(seq))
# define N_PP_SEQ_CAT_S_I_B(s, seq) N_PP_SEQ_HEAD(seq)
#
# endif
