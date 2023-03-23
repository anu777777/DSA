#include<iostream>
using namespace std;

int computingPower(int x, unsigned int y) {
    int temp;
    if (y == 0) return 1;
    temp = computingPower(x, y/2);
    if (y % 2 == 0) {
        return temp * temp;
    }
    else {
        return x * temp * temp;
    }
}

int main() {
    int x = 3, y = 8;
    cout << computingPower(x, y);
    return 0;
}