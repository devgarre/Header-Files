// Header Files.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string prompt = "PLease enter a word to echo: ";
	string echo = "*silence*";
	echo = listen(prompt);
	next();
	print(echo);
	next();
	next();
	print(echo);
	next();
	next();
	next();
	print(echo);
	next();
	next();
	next();
	next();
	print(echo);
	system("pause");
    return 0;
}

