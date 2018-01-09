#include <iostream>

using namespace std;

int main() {
    // Declaration
    double a, b;
    double largest;

    // Input
    cout << "Enter number 1: ";
    cin >> a;
    cout << "Enter number 2: ";
    cin >> b;

    // Calculation
    if (a > b) {
        largest = a;
    } else {
        largest = b;
    }

    // Output
    cout << "The largest number is " << largest << endl;

    return 0;
}