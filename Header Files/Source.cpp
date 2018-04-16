// Source.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

void print(string output)
{
	cout << output << endl;
}

string listen(string input)
{
	string userInput = "";
	cout << input << endl;
	cin >> userInput;
	return userInput;
}

void next()
{
	cout << endl;
}