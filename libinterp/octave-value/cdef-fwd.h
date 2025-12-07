////////////////////////////////////////////////////////////////////////
//
// Copyright (C) 2021-2026 The Octave Project Developers
//
// See the file COPYRIGHT.md in the top-level directory of this
// distribution or <https://octave.org/copyright/>.
//
// This file is part of Octave.
//
// Octave is free software: you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Octave is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Octave; see the file COPYING.  If not, see
// <https://www.gnu.org/licenses/>.
//
////////////////////////////////////////////////////////////////////////

#if ! defined (octave_cdef_fwd_h)
#define octave_cdef_fwd_h 1

#include "octave-config.h"

OCTAVE_BEGIN_NAMESPACE(octave)

class OCTINTERP_API cdef_class;
class OCTINTERP_API cdef_object;
class OCTINTERP_API cdef_package;

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define CYAN    "\033[36m"      /* Cyan */
#define MAGENTA "\033[35m"      /* Magenta */
#define YELLOW  "\033[33m"      /* Yellow */



OCTAVE_END_NAMESPACE(octave)

#endif
