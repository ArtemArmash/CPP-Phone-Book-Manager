#pragma once
#include "Human.h"
using namespace std;
struct StartUp
{
	Human human;
	void Input() {
		cout << "Enter your name & age: ";
		cin.getline(human.name, sizeof(human.name));
		cin >> human.age;
	}

	void Start() {
		Input();
		human.ShowData();
	}
};