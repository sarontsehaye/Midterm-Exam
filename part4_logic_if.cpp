#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    // Nested if to find the largest
    if (x >= y) {
        if (x >= z)
            cout << "Largest: " << x << endl;
        else
            cout << "Largest: " << z << endl;
    } else {
        if (y >= z)
            cout << "Largest: " << y << endl;
        else
            cout << "Largest: " << z << endl;
    }

    // Leap year check
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
