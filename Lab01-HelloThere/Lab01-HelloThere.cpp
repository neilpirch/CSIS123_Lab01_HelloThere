// Lab01-HelloThere.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string userName;

	cout << endl << "Enter your name: ";
	cin >> userName;
	cout << endl << "Hello " << userName << " !" << endl;

	cout << endl;
	system("pause");
    return 0;
}

