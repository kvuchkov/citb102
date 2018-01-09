#include <iostream>
#include <cmath>
#include <string>

using namespace std;

/*
 * Task 3
 * ------
 * Output the reverse initials of a full name (first, middle and last).
 * */
int main() {

    // Declaration
    string firstName, middleName, lastName;
    std::locale loc;

    // Input
    cout << "Enter your full name: ";
    cin >> firstName >> middleName >> lastName;

    char firstNameInitial = toupper(firstName.at(firstName.length() - 1));
    char middleNameInitial = toupper(middleName.at(middleName.length() - 1));
    char lastNameInitial = toupper(lastName.at(lastName.length() - 1));

    // Output
    cout << "Your rev initials: "
         << firstNameInitial
         << middleNameInitial
         << lastNameInitial
         << endl;

    return 0;
}