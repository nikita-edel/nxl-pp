# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* Revised by Edward Diener (2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NXL_PP_CONTROL_DEDUCE_D_H
# define NXL_PP_CONTROL_DEDUCE_D_H
#
# include "nxl/pp/config/config.h"
#
# if ~N_PP_CONFIG_FLAGS() & N_PP_CONFIG_STRICT()
#
# include "nxl/pp/control/while.h"
# include "nxl/pp/detail/auto_rec.h"
#
# /* N_PP_DEDUCE_D */
#
# define N_PP_DEDUCE_D() N_PP_AUTO_REC(N_PP_WHILE_P, 256)
#
# else
#
# include "nxl/pp/arithmetic/dec.h"
# include "nxl/pp/control/while.h"
# include "nxl/pp/detail/auto_rec.h"
# include "nxl/pp/config/limits.h"
#
# /* N_PP_DEDUCE_D */
#
# if N_PP_LIMIT_WHILE == 256
# define N_PP_DEDUCE_D() N_PP_DEC(N_PP_AUTO_REC(N_PP_WHILE_P, 256))
# elif N_PP_LIMIT_WHILE == 512
# define N_PP_DEDUCE_D() N_PP_DEC(N_PP_AUTO_REC(N_PP_WHILE_P, 512))
# elif N_PP_LIMIT_WHILE == 1024
# define N_PP_DEDUCE_D() N_PP_DEC(N_PP_AUTO_REC(N_PP_WHILE_P, 1024))
# else
# error Incorrect value for the N_PP_LIMIT_WHILE limit
# endif
#
# endif
#
# endif
