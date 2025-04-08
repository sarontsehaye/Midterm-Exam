#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    float favoriteNumber;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your favorite number: ";
    cin >> favoriteNumber;

    cout << "\n--- User Info ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Favorite Number: " << favoriteNumber << endl;

    // Declare and print various data types
    int a = 10;
    float b = 3.14;
    char c = 'Z';
    string s = "Hello";

    cout << "\n--- Variable Values ---" << endl;
    cout << "int: " << a << ", float: " << b << ", char: " << c << ", string: " << s << endl;

    return 0;
}
