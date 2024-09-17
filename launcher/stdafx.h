#pragma once

#ifndef STRICT
#define STRICT
#endif

#define WINVER       _WIN32_WINNT_WIN2K
#define _WIN32_WINNT _WIN32_WINNT_WIN2K

// Enable comctl 6.0 (visual styles)
#define ISOLATION_AWARE_ENABLED 1

// Enable COM C interfaces
#define CINTERFACE
#define COBJMACROS
#define INITGUID

#include "resource.h"
#include <windows.h>
#include "Trace.h"
