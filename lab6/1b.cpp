#include <iostream>

using namespace std;

int main() {

    // Declarations
    int sum = 0;
    int x;
    
    while(cin >> x) { // Input
        sum += x; // Calculation
    }

    // Output
    cout << sum << endl;

    return 0;
}