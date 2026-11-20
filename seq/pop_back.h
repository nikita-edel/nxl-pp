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
# ifndef NXL_PP_SEQ_POP_BACK_H
# define NXL_PP_SEQ_POP_BACK_H
#
# include "nxl/pp/arithmetic/dec.h"
# include "nxl/pp/config/config.h"
# include "nxl/pp/seq/first_n.h"
# include "nxl/pp/seq/size.h"
#
# /* N_PP_SEQ_POP_BACK */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SEQ_POP_BACK(seq) N_PP_SEQ_FIRST_N(N_PP_DEC(N_PP_SEQ_SIZE(seq)), seq)
# else
#    define N_PP_SEQ_POP_BACK(seq) N_PP_SEQ_POP_BACK_I(seq)
#    define N_PP_SEQ_POP_BACK_I(seq) N_PP_SEQ_FIRST_N(N_PP_DEC(N_PP_SEQ_SIZE(seq)), seq)
# endif
#
# endif
