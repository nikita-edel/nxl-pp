# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2015.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NXL_PP_SEQ_DETAIL_IS_EMPTY_H
# define NXL_PP_SEQ_DETAIL_IS_EMPTY_H
#
# include "nxl/pp/config/config.h"
# include "nxl/pp/arithmetic/dec.h"
# include "nxl/pp/logical/bool.h"
# include "nxl/pp/logical/compl.h"
# include "nxl/pp/seq/size.h"
#
/* An empty seq is one that is just N_PP_SEQ_NIL */
#
# define N_PP_SEQ_DETAIL_IS_EMPTY(seq) \
    N_PP_COMPL \
        ( \
        N_PP_SEQ_DETAIL_IS_NOT_EMPTY(seq) \
        ) \
/**/
#
# define N_PP_SEQ_DETAIL_IS_EMPTY_SIZE(size) \
    N_PP_COMPL \
        ( \
        N_PP_SEQ_DETAIL_IS_NOT_EMPTY_SIZE(size) \
        ) \
/**/
#
# define N_PP_SEQ_DETAIL_IS_NOT_EMPTY(seq) \
    N_PP_SEQ_DETAIL_IS_NOT_EMPTY_SIZE(N_PP_SEQ_DETAIL_EMPTY_SIZE(seq)) \
/**/
#
# define N_PP_SEQ_DETAIL_IS_NOT_EMPTY_SIZE(size) \
    N_PP_BOOL(size) \
/**/
#
# define N_PP_SEQ_DETAIL_EMPTY_SIZE(seq) \
    N_PP_DEC(N_PP_SEQ_SIZE(seq (nil))) \
/**/
#
# endif
