#include "CrtDbg.h"
#include <iostream>
using std::cin;

#define _CRTDBG_MAP_ALLOC


int main()
{
	{
		
	}
	_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
	_CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);
	_CrtDumpMemoryLeaks();

	cin.get();
    return 0;
}