#include <iostream>

double simple(double deposit, double interest, int years);

double complex(double deposit, double interest, int years);

using namespace std;


int main() {
    double deposit;
    int interestPercentage;
    int years;
    double resultSimple, resultComplex, interest;

    cin >> deposit >> interestPercentage >> years;

    interest = interestPercentage / 100.0;

    resultSimple = simple(deposit, interest, years);
    resultComplex = complex(deposit, interest, years);

    cout << resultSimple << endl;
    cout << resultComplex << endl;

    return 0;
}

double complex(double deposit, double interest, int years) {
    for (int i = 0; i < years; i++) {
        deposit = deposit * (1 + interest);
    }
    return deposit;
}

double simple(double deposit, double interest, int years) {
    return deposit * (1 + interest * years);
}