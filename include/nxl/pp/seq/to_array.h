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
# ifndef NXL_PP_SEQ_TO_ARRAY_H
# define NXL_PP_SEQ_TO_ARRAY_H
#
# include "nxl/pp/config/config.h"
# include "nxl/pp/seq/enum.h"
# include "nxl/pp/seq/size.h"
#
# /* N_PP_SEQ_TO_ARRAY */
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_EDG()
#    define N_PP_SEQ_TO_ARRAY(seq) (N_PP_SEQ_SIZE(seq), (N_PP_SEQ_ENUM(seq)))
# else
#    define N_PP_SEQ_TO_ARRAY(seq) N_PP_SEQ_TO_ARRAY_I(seq)
#    define N_PP_SEQ_TO_ARRAY_I(seq) (N_PP_SEQ_SIZE(seq), (N_PP_SEQ_ENUM(seq)))
# endif
#
# endif
