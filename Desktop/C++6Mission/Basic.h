#pragma once
#include <iostream>
#include <fstream>
using namespace std;
// Тут основа, оголошую все найголовніше
const int MAX_SONGS = 200;
const int MAX_NAME_LENGTH = 100;
const int MAX_AUTHOR_LENGTH = 100;
const int MAX_YEAR_LENGTH = 100;
const int MAX_TEXT_LENGTH = 1000;

struct Song
{
	char name[MAX_NAME_LENGTH];
	char author[MAX_AUTHOR_LENGTH];
	char year[MAX_YEAR_LENGTH];
	char text[MAX_TEXT_LENGTH];
};
