// In the name of God !
//Perfect Number
//v1.0
#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
	int num, i, c=0;
	cout << "Enter a number :";
	cin >> num;
	for (i = 1; i <= num; i++)
		if (num%i == 0)
			c = c + i;
	c = c - num;
	if (num == c)
		cout << "This is a Perfect Number!" << endl;
	else
		cout << "This is NOT a Perfect Number!" << endl;
	cin.get();
	cin.ignore();
}
//Created by /%++;; Mohammad-Mahdi Farah-bakhsh ;;++%\