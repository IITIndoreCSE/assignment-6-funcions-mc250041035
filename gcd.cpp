#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int r;
    if (b == 0) {
        return a;
    } else {
        while (b != 0) {
            int r = a % b;  // a = 12, b = 8
            a = b;
            b = r;
        }
    }
    return
