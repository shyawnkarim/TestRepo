// TestRepo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

// Function prototypes
string RobTest();
string ShyawnTest();
string RuzannaTest();
string ArtemTest();
string JennyTest();


int _tmain(int argc, _TCHAR* argv[])
{
	int kek = 0;
	
	cout << RobTest() << endl << ShyawnTest() << endl 
		<< RuzannaTest() << endl << ArtemTest() << endl 
		<< JennyTest() << endl;

	cout << endl << "Enter anything to quit..." << endl;
	cin >> kek;

	return 0;
}

string RobTest()
{
	string temp = "There is something here!";

	return temp;
}

string ShyawnTest()
{
	return "Nothing here boss...";
}

string RuzannaTest()
{
	return "Nothing here boss...";
}

string ArtemTest()
{
	return "Nothing here boss...";
}

string JennyTest()
{
	return "Nothing here boss...";
}

