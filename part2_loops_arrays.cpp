#include <iostream>
using namespace std;

int main() {
    // Print even numbers from 1 to 50
    cout << "Even numbers from 1 to 50:" << endl;
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    // Integer array input and output
    int arr[10];
    int index = 0;
    
    cout << "Enter 10 integers:" << endl;
    while (index < 10) {
        cin >> arr[index];
        index++;
    }

    cout << "You entered:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
