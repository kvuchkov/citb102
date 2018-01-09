#include <iostream>
#include <cctype>

using namespace std;

int charToDigit(char c) {
    return c - '0';
}

bool parse(string input, int &number) {
    number = 0;
    for (int i = input.length() - 1, p = 1; i >= 0; i--, p *= 10) {
        if (!isdigit(input[i])) {
//            cout << "non digit: " << input[i] << endl;
            return false;
        }
        number += charToDigit(input[i]) * p;
    }
    return true;
}

int main() {

    string input;
    int number;

    cin >> input;

    if (parse(input, number)) {
        cout << number + 1 << endl;
    } else {
        cout << "Not a number" << endl;
    }

    return 0;
}