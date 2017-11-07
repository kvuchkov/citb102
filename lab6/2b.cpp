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
        // For every number that we read, the new biggest is the bigger of the number and the biggest so far
        maxValue = max(x, maxValue);

        // For every number that we read, the new smallest is the smaller of the number and the smallest so far
        minValue = min(x, minValue);
    }

    // Output
    cout << minValue << " " << maxValue << endl;

    return 0;
}