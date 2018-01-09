#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // Declaration
    int tankSize;
    double fuelEfficiency;
    double pricePerLitter;

    double distance;
    double cost;

    // Input
    cout << "Enter a tank size: ";
    cin >> tankSize;

    cout << "Enter fuel efficiency (km per liter): ";
    cin >> fuelEfficiency;

    cout << "Enter price per liter:";
    cin >> pricePerLitter;

    // Calculation
    distance = tankSize / fuelEfficiency * 100;
    cost = pricePerLitter * fuelEfficiency;

    // Output
    cout << fixed;
    cout << setprecision(0);
    cout << "We can travel " <<  distance << "km." << endl;
    cout << setprecision(2);
    cout << "For every 100km it will cost "<< cost << "lv." << endl;


    return 0;
}