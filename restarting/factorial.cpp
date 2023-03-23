#include<iostream>
using namespace std;

int getFactorial(int num) {
    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial = factorial * i;
    }
    return factorial;
}

int main() {
    int factof = 4;
    cout << getFactorial(factof);
    return 0;
}