#include <iostream>
using namespace std;

float calculateArea(float length, float width) {
    return length * width;
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
