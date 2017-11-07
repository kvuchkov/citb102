#include <iostream>
#include <limits>

using namespace std;

int main() {
    // Declarations
    int x;
    int maxValue, minValue;

    cin >> x;

    //The first number is both the biggest and the smallest so far
    maxValue = minValue = x;

    while (cin >> x) { // Input
        // For every number that we read, check to see if it is bigger than the biggest so far
        if (x > maxValue) {
            maxValue = x;
        }
        // For every number that we read, check to see if it is smaller than the smallest so far
        if (x < minValue) {
            minValue = x;
        }
    }

    // Output
    cout << minValue << " " << maxValue << endl;

    return 0;
}