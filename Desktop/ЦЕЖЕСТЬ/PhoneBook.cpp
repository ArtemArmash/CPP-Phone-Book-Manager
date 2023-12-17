#include "PhoneBook.h"

void PhoneBook::addAbonent(const char* name, const char* home, const char* work, const char* mobile, const char* info)
{
    if (countAbonent < Max_Abonents) {
        abonents[countAbonent] = new PhoneBookEntry(name, home, work, mobile, info);
        countAbonent++;
        cout << "Abonent added." << endl;
    }
    else {
        cout << "Phone book is full. Cannot add more abonents." << endl;
    }
}

void PhoneBook::removeAbonent(const char* name)
{
    for (int i = 0; i < countAbonent; i++) {
        if (strcmp(abonents[i]->getPIB(), name) == 0) {
            delete abonents[i];
            abonents[i] = abonents[--countAbonent];
            cout << "Abonent removed." << endl;
            return;
        }
    }
    cout << "Abonent with PIB " << name << " not found." << endl;

}

void PhoneBook::searchAbonent(const char* name) const
{
    for (int i = 0; i < countAbonent; i++) {
        if (strcmp(abonents[i]->getPIB(), name) == 0) {
            abonents[i]->display();
            return;
        }
    }
    cout << "Abonent with PIB " << name << " not found." << endl;
}

void PhoneBook::displayAllAbonents() const
{
    if (countAbonent > 0) {
        for (int i = 0; i < countAbonent; i++) {
            abonents[i]->display();
            cout << "--------------------------" << endl;
        }
    }
    else {
        cerr << "Phone book is empty. No subscribers to display." << endl;
    }
}

void PhoneBook::clear()
{
    for (int i = 0; i < countAbonent; ++i) {
        delete abonents[i];
    }
    countAbonent = 0;
}