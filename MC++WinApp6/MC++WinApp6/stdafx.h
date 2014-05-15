// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
#pragma once
#include <cstdlib>
#include <Windows.h>

#define Display(a) MessageBox::Show(System::Convert::ToString(a))

#define PAUSE 100