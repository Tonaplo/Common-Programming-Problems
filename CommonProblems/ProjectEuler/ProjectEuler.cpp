// ProjectEuler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Headerfiles.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Problem2 *pb2 = new Problem2();
	pb2->Execute();

	
	std::cin.ignore();
	return 0;
}

