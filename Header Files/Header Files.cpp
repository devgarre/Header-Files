// Header Files.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

void say(string sayThis) 
{
	cout << sayThis << endl;
}

string hear(string PromptUser) 
{
	string userInput = "";
	cout << PromptUser << endl;
	cin >> userInput;
	return userInput;
}

int main()
{

    return 0;
}

