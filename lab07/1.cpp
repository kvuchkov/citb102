#include <iostream>

using namespace std;

double add(double x, double y) {
    return x+y;
}
double substract(double x, double y) {
    return x-y;
}
double multiply(double x, double y) {
    return x*y;
}
double divide(double x, double y) {
    return x/y;
}

double execute(double x, char op, double y) {

    if (op == '+')
        return add(x, y);
    else if (op == '-')
        return substract(x, y);
    else if (op == '*')
        return multiply(x, y);
    else if (op == '/')
        return divide(x, y);
    else
        return 0;
}

int main() {
    double x, y, result;
    char op;

    cin >> x >> op >> y;

    result = execute(x, op, y);

    cout << result << endl;

    return 0;
}