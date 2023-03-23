//FACTORIAL OF A NUMBER

#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
       return 1;
    return n * factorial(n-1);
}

int main() {
    cout << factorial(4) << endl;
    cout << factorial(0);
    return 0;
}