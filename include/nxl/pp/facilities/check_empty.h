# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2019.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NXL_PP_FACILITIES_CHECK_EMPTY_H
# define NXL_PP_FACILITIES_CHECK_EMPTY_H
# include "nxl/pp/variadic/has_opt.h"
# if N_PP_VARIADIC_HAS_OPT()
# include "nxl/pp/facilities/is_empty_variadic.h"
# define N_PP_CHECK_EMPTY(...) N_PP_IS_EMPTY_OPT(__VA_ARGS__)
# endif /* N_PP_VARIADIC_HAS_OPT() */
# endif /* NXL_PP_FACILITIES_CHECK_EMPTY_H */
