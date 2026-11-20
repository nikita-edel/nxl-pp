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
# ifndef NXL_PP_SEQ_SUBSEQ_H
# define NXL_PP_SEQ_SUBSEQ_H
#
# include "nxl/pp/config/config.h"
# include "nxl/pp/seq/first_n.h"
# include "nxl/pp/seq/rest_n.h"
#
# /* N_PP_SEQ_SUBSEQ */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SEQ_SUBSEQ(seq, i, len) N_PP_SEQ_FIRST_N(len, N_PP_SEQ_REST_N(i, seq))
# else
#    define N_PP_SEQ_SUBSEQ(seq, i, len) N_PP_SEQ_SUBSEQ_I(seq, i, len)
#    define N_PP_SEQ_SUBSEQ_I(seq, i, len) N_PP_SEQ_FIRST_N(len, N_PP_SEQ_REST_N(i, seq))
# endif
#
# endif
