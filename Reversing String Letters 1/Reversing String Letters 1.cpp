// Reversing String Letters 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{

	string s = "bhaipori";
	string s_new = "";

	for (int i = s.size()-1; i >= 0 ; --i)
	{ 
		s_new += s[i];
	}
	cout << endl;
	cout << "Reversed letter is: " << s_new << endl;
	cout << endl;
	cout << "Your word is: " << s << endl;
	cout << endl;
	cout << "Well Done!\n";
	cout << endl;
    return 0;
}

