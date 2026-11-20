# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2003.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NXL_PP_FACILITIES_IS_1_H
# define NXL_PP_FACILITIES_IS_1_H
#
# include "nxl/pp/cat.h"
# include "nxl/pp/facilities/is_empty.h"
#
# /* N_PP_IS_1 */
#
# define N_PP_IS_1(x) N_PP_IS_EMPTY(N_PP_CAT(N_PP_IS_1_HELPER_, x))
# define N_PP_IS_1_HELPER_1
#
# endif
