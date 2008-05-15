/*
* Copyright (c) 2003-2008 Rony Shapiro <ronys@users.sourceforge.net>.
* All rights reserved. Use of the code is allowed under the
* Artistic License 2.0 terms, as specified in the LICENSE file
* distributed with this code, or available from
* http://www.opensource.org/licenses/artistic-license-2.0.php
*/
#ifndef _PWS_TCHAR_H
/**
 * Use Windows' tchar.h for Windows build,
 * roll our own for others.
 *
 */
#ifdef _WIN32
#include <tchar.h>
#else
#ifdef UNICODE
#include <wctype.h>
#define _istalpha(x) iswalpha(x)
#define _totupper(x) towupper(x)
#define _istlower(x) iswlower(x)
#define _istupper(x) iswupper(x)
#define _istdigit(x) iswdigit(x)
#else
#include <ctype.h>
#define _istalpha(x) isalpha(x)
#define _totupper(x) toupper(x)
#define _istlower(x) islower(x)
#define _istupper(x) isupper(x)
#define _istdigit(x) isdigit(x)
#endif /* UNICODE */
#endif /* _WIN32 */
#endif /* _PWS_TCHAR_H */
