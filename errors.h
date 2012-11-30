/******************************************************************************\
 * Copyright (C) Jim Switzer 2012
 *
 * ----------------------------------------------------------------------------
 *
 * This file is part of Megatherium.
 *
 * Megatherium is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Megatherium is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Megatherium.  If not, see <http://www.gnu.org/licenses/>.
\******************************************************************************/

#include <stdint.h>


typedef uint16_t MEG_STATUS;

// OK code
#define MEG_OK                        (0)

// Generic Error code
#define MEG_ERROR                    (-1)

// Specific Error codes 1-1000
#define MEG_ERROR_OOM                 (1)

// Specific non-error return codes 1001 - 2^16
#define MEG_RET_NOT_FOUND          (1001)
