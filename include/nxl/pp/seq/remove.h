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
# ifndef NXL_PP_SEQ_REMOVE_H
# define NXL_PP_SEQ_REMOVE_H
#
# include "nxl/pp/arithmetic/inc.h"
# include "nxl/pp/config/config.h"
# include "nxl/pp/seq/first_n.h"
# include "nxl/pp/seq/rest_n.h"
#
# /* N_PP_SEQ_REMOVE */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SEQ_REMOVE(seq, i) N_PP_SEQ_FIRST_N(i, seq) N_PP_SEQ_REST_N(N_PP_INC(i), seq)
# else
#    define N_PP_SEQ_REMOVE(seq, i) N_PP_SEQ_REMOVE_I(seq, i)
#    define N_PP_SEQ_REMOVE_I(seq, i) N_PP_SEQ_FIRST_N(i, seq) N_PP_SEQ_REST_N(N_PP_INC(i), seq)
# endif
#
# endif
