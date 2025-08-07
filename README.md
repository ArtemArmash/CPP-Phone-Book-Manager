# C++ Console Phone Book Manager

This is a console-based application for managing a phone book, built using Object-Oriented Programming (OOP) principles in C++. The program allows users to add, remove, search for, and display contact entries through an interactive menu.

## About The Project

This project serves as a practical example of C++ application development, showcasing several fundamental concepts:

*   **Object-Oriented Programming (OOP)**: The logic is organized into classes (`PhoneBook` and `PhoneBookEntry`), demonstrating encapsulation, constructors, and destructors.
*   **Dynamic Memory Management**: The application uses `new` and `delete` to manage the lifecycle of `PhoneBookEntry` objects and dynamically allocated C-strings, providing a great example of manual memory control.
*   **Code Organization**: The project is modularized into multiple files (`.h` for declarations and `.cpp` for implementations), which is standard practice for larger C++ projects.
*   **Pointers and Arrays**: The `PhoneBook` class manages a collection of contacts using an array of pointers to `PhoneBookEntry` objects.
*   **CRUD Functionality**: Implements core **C**reate (Add), **R**ead (Search/Display), and **D**elete (Remove) operations for managing contacts.

## Features

The application provides a command-line menu with the following options:

1.  **Add Abonent**: Add a new contact with their full name, home phone, work phone, mobile phone, and additional information.
2.  **Remove Abonent**: Delete an existing contact by searching for their name.
3.  **Search Abonent**: Find and display the details of a specific contact by their name.
4.  **Display All Abonents**: Show a list of all contacts currently stored in the phone book.
5.  **Exit**: Safely terminate the program, cleaning up all allocated memory.

## Project Structure

The code is organized into the following files:

*   **`PhoneBookEntry.h`**: Declares the `PhoneBookEntry` class, which represents a single contact in the phone book. It holds the contact's data.
*   **`PhoneBook.h`**: Declares the `PhoneBook` class, which manages all the phone book operations, including storing an array of `PhoneBookEntry` pointers.
*   **`PhoneBook.cpp`**: Implements the methods of the `PhoneBook` class (add, remove, search, etc.).
*   **`ConsoleApplication180.cpp`**: The main file containing the `main` function, which runs the user menu and handles user input.

## How to Build and Run

To compile and run this project, you need a C++ compiler (like G++, Clang, or MSVC).

1.  Place all the source and header files (`.cpp` and `.h`) in the same directory.
2.  Open a terminal or command prompt in that directory.
3.  Compile the project by linking all `.cpp` files:
    ```sh
    g++ ConsoleApplication180.cpp PhoneBook.cpp -o phonebook_app
    ```
4.  Run the compiled executable:
    ```sh
    ./phonebook_app
    ```
    On Windows, the command would be:
    ```cmd
    phonebook_app.exe
    ```

## Usage Example

The program starts with a menu. Enter a number to choose an action.

```
Menu:
1. Add Abonent
2. Remove Abonent
3. Search Abonent
4. Display All Abonents
5. Exit
Enter choice: 1
Enter PIB: Ivan Ivanov
Enter home phone: 111-222-33
Enter work phone: 444-555-66
Enter mobile phone: 777-888-99
Enter more info: Colleague
Abonent added.

Menu:
...
Enter choice: 4
PIB: Ivan Ivanov
Home Phone: 111-222-33
Work Phone: 444-555-66
Mobile Phone: 777-888-99
Additional Info: Colleague
--------------------------
```
```
