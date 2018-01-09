#include <iostream>
#include <cctype>

using namespace std;

int main() {

    // Declarations
    string firstName, middleName, lastName;
    char sex;
    string prefix;
    char firstNameInitial, middleNameInitial, lastNameInitial;

    // Input
    cin >> firstName >> middleName >> lastName >> sex;
    cout << "Read: "
         << firstName << " "
         << middleName << " "
         << lastName << " "
         << sex << endl;

    // Calculation
    if (toupper(sex) == 'M') {
        prefix = "Mr.";
    } else {
        prefix = "Mrs.";
    }

    //Alternatively, you can use the ternary operator to achieve the same result as above:
    // prefix = toupper(sex) == 'M' ? "Mr." : "Mrs.";

    firstNameInitial = toupper(firstName.front());
    middleNameInitial = toupper(middleName.front());
    lastNameInitial = toupper(lastName.front());

    // Output

    cout << prefix << " "
         << lastName << ", your initials are "
         << firstNameInitial
         << middleNameInitial
         << lastNameInitial << endl;


    return 0;
}