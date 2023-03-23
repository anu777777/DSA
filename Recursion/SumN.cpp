//Find the sum of first n natural numbers

#include<bits/stdc++.h>
using namespace std;

int sumN(int n) {
    if (n == 1)
       return 1;
    return n + sumN(n-1);
}

int main() { 
    cout << sumN(9);
    return 0;
}