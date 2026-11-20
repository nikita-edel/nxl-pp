# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2014.                                    *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef NXL_PP_ARRAY_DETAIL_GET_DATA_H
# define NXL_PP_ARRAY_DETAIL_GET_DATA_H
#
# include "nxl/pp/config/config.h"
# include "nxl/pp/tuple/rem.h"
# include "nxl/pp/control/if.h"
# include "nxl/pp/control/iif.h"
# include "nxl/pp/facilities/is_1.h"
#
# /* N_PP_ARRAY_DETAIL_GET_DATA */
#
# define N_PP_ARRAY_DETAIL_GET_DATA_NONE(size, data)

# if !(N_PP_VARIADICS_MSVC && _MSC_VER <= 1400)
#    if N_PP_VARIADICS_MSVC
#       define N_PP_ARRAY_DETAIL_GET_DATA_ANY_VC_DEFAULT(size, data) N_PP_TUPLE_REM(size) data
#       define N_PP_ARRAY_DETAIL_GET_DATA_ANY_VC_CAT(size, data) N_PP_TUPLE_REM_CAT(size) data
#       define N_PP_ARRAY_DETAIL_GET_DATA_ANY(size, data) \
            N_PP_IIF \
                ( \
                N_PP_IS_1(size), \
                N_PP_ARRAY_DETAIL_GET_DATA_ANY_VC_CAT, \
                N_PP_ARRAY_DETAIL_GET_DATA_ANY_VC_DEFAULT \
                ) \
            (size,data) \
/**/
#    else
#       define N_PP_ARRAY_DETAIL_GET_DATA_ANY(size, data) N_PP_TUPLE_REM(size) data
#    endif
# else
#    define N_PP_ARRAY_DETAIL_GET_DATA_ANY(size, data) N_PP_TUPLE_REM(size) data
# endif

# define N_PP_ARRAY_DETAIL_GET_DATA(size, data) \
    N_PP_IF \
        ( \
        size, \
        N_PP_ARRAY_DETAIL_GET_DATA_ANY, \
        N_PP_ARRAY_DETAIL_GET_DATA_NONE \
        ) \
    (size,data) \
/**/
#
# endif /* NXL_PP_ARRAY_DETAIL_GET_DATA_H */
