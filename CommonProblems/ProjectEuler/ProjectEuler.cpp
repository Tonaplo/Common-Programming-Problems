// ProjectEuler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Headerfiles.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Problem3 *pb3 = new Problem3();
	pb3->Execute();

	
	std::cin.ignore();
	return 0;
}

