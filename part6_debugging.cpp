#include<iostream>
using namespace std;

int main() {
    int number = 10;

    // ❌ Error: '=' is assignment, not comparison
    // ✅ Fix: Use '==' to compare
    if (number == 20) {
        cout << "Number is 20" << endl;
    } else {
        cout << "Number is not 20" << endl;
    }

    // ❌ Error: semicolon ends the for loop prematurely
    // ✅ Fix: remove the semicolon so the loop includes the next line
    for (int i = 0; i <= 5; i++) {
        cout << i << endl;
    }

    return 0;
}
