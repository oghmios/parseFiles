// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "parserGUI.h"
#include "parserSource.h"
// TODO: reference additional headers your program requires here

void openFileForParse(System::Windows::Forms::OpenFileDialog^  openDialog);

parserSource parse;

