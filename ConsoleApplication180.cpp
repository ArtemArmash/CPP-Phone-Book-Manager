#include <iostream>
#include "PhoneBook.h"
#include "PhoneBookEntry.h"
using namespace std;

int main() {
    PhoneBook phoneBook;
    int choice;

    do {
        cout << "Menu:" << endl;
        cout << "1. Add Abonent" << endl;
        cout << "2. Remove Abonent" << endl;
        cout << "3. Search Abonent" << endl;
        cout << "4. Display All Abonents" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
        {
            char name[256], home[20], work[20], mobile[20], info[256];
            cout << "Enter PIB: ";
            cin >> name;
            cout << "Enter home phone: ";
            cin >> home;
            cout << "Enter work phone: ";
            cin >> work;
            cout << "Enter mobile phone: ";
            cin >> mobile;
            cout << "Enter more info: ";
            cin >> info;
            phoneBook.addAbonent(name, home, work, mobile, info);
        }
        break;
        case 2:
        {
            char name[256];
            cout << "Enter abonen, which needs to be deleted: ";
            cin >> name;
            phoneBook.removeAbonent(name);
        }
        break;
        case 3:
        {
            char name[256];
            cout << "Enter abonen to search: ";
            cin >> name;
            phoneBook.searchAbonent(name);
        }
        break;
        case 4:
            phoneBook.displayAllAbonents();
            break;
        case 5:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a valid option." << endl;
            break;
        }
    } while (choice != 5);
}