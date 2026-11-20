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
# ifndef NXL_PP_REPETITION_DEDUCE_Z_H
# define NXL_PP_REPETITION_DEDUCE_Z_H
#
# include "nxl/pp/detail/auto_rec.h"
# include "nxl/pp/repetition/repeat.h"
#
# /* N_PP_DEDUCE_Z */
#
# define N_PP_DEDUCE_Z() N_PP_AUTO_REC(N_PP_REPEAT_P, 4)
#
# endif
