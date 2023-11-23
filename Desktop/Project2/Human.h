#pragma once
#include <iostream>
struct Human
{
	int age;
	char name[256];

	void ShowData()
	{
		std::cout << name << "\n" << age << "\n";
	}
};