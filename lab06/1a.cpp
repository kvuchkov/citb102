#include <iostream>

using namespace std;

int main() {

    // Declarations
    int n;
    int sum = 0;
    int x;
    
    cin >> n; // Input

    for (int i = 0; i < n; ++i) {
        cin >> x; // Input
        sum += x; // Calculation
    }

    // Output
    cout << sum << endl;

    return 0;
}