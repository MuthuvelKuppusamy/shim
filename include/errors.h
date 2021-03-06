// SPDX-License-Identifier: BSD-2-Clause-Patent

#ifndef SHIM_ERRORS_H
#define SHIM_ERRORS_H

#include <efierr.h>

#ifndef EFI_INCOMPATIBLE_VERSION
#define EFI_INCOMPATIBLE_VERSION	EFIERR(25)
#endif
#ifndef EFI_SECURITY_VIOLATION
#define EFI_SECURITY_VIOLATION		EFIERR(26)
#endif

#endif /* SHIM_ERRORS_H */
