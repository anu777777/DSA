//JOSEPHE'S PROBLEM

#include<bits/stdc++.h>
using namespace std;

int josh(int n, int k) {
    if (n == 1)
       return 0;
    return (josh(n-1,k)+k)%n;
}

int main() {
    cout << josh(5, 3);
    return 0;
}