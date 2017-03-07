// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define _CRT_SECURE_NO_WARNINGS
#include <ctime>
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	time_t now=time(0);
	char* dt= ctime(&now);
	cout << "The local date and time is" << dt << endl;
	tm *gmtm=gmtime(&now);
	dt=asctime(gmtm);
	cout << "The UTC date and time is:" << dt << endl;

	system("pause");

	return 0;
}

