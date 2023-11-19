#include <iostream>
#include "FunctionInput.h"

using namespace std;

int main() {
	human p;
	Input(p);
	cout << "Name: " << p.name;
	cout << "\nAge: " << p.age;
}