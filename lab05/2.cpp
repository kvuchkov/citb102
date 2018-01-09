#include <iostream>

using namespace std;

int main() {
    // Declaration
    double a, b, c;
    double largest;

    // Input
    cout << "Enter number 1: ";
    cin >> a;
    cout << "Enter number 2: ";
    cin >> b;
    cout << "Enter number 3: ";
    cin >> c;

    // Calculation
    if (a >= b && a >= c) {
        largest = a;
    } else if(b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }

    // Output
    cout << "The largest number is " << largest << endl;

    return 0;
}