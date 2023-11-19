#pragma once
#include <iostream>
using namespace std;
#include "humah.h"

void Input(human& p)
{
	cout << "Enter name: ";
	cin >> p.name;
	cout << "\nEnter age: ";
	cin >> p.age;
}