#pragma once
#pragma warning(disable : 4996)
#include <iostream>
#include <cstring>
using namespace std;
class PhoneBookEntry
{
private:
    char* PIB;
    char homePhone[20];
    char workPhone[20];
    char mobilePhone[20];
    char additionalInfo[256];

public:
    PhoneBookEntry(const char* name, const char* home, const char* work, const char* mobile, const char* info)
        : PIB(nullptr) {
        PIB = new char[strlen(name) + 1];
        strcpy(PIB, name);
        strcpy(homePhone, home);
        strcpy(workPhone, work);
        strcpy(mobilePhone, mobile);
        strcpy(additionalInfo, info);
    }

    ~PhoneBookEntry() {
        delete[] PIB;
    }

    const char* getPIB() const {
        return PIB;
    }

    void display() const {
        cout << "PIB: " << PIB << endl;
        cout << "Home Phone: " << homePhone << endl;
        cout << "Work Phone: " << workPhone << endl;
        cout << "Mobile Phone: " << mobilePhone << endl;
        cout << "Additional Info: " << additionalInfo << endl;
    }
};