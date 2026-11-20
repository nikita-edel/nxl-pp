# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2014.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
#ifndef NXL_PP_REMOVE_PARENS_H
#define NXL_PP_REMOVE_PARENS_H

#include "nxl/pp/config/config.h"
#include "nxl/pp/control/iif.h"
#include "nxl/pp/facilities/identity.h"
#include "nxl/pp/punctuation/is_begin_parens.h"
#include "nxl/pp/tuple/enum.h"

#define N_PP_REMOVE_PARENS(param) \
    N_PP_IIF \
      ( \
      N_PP_IS_BEGIN_PARENS(param), \
      N_PP_REMOVE_PARENS_DO, \
      N_PP_IDENTITY \
      ) \
    (param)() \
/**/

#define N_PP_REMOVE_PARENS_DO(param) \
  N_PP_IDENTITY(N_PP_TUPLE_ENUM(param)) \
/**/

#endif /* NXL_PP_REMOVE_PARENS_H */
