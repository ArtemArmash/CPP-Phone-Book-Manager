#pragma once
#include <iostream>
#include <cstring>
#include "PhoneBookEntry.h"
using namespace std;
class PhoneBook
{
private:
    static const int Max_Abonents = 50;
    PhoneBookEntry* abonents[Max_Abonents];
    int countAbonent;

public:
    PhoneBook() : countAbonent(0) {}

    ~PhoneBook() {
        clear();
    }

    void addAbonent(const char* name, const char* home, const char* work, const char* mobile, const char* info);

    void removeAbonent(const char* name);

    void searchAbonent(const char* name) const;

    void displayAllAbonents() const;

    void clear();
};