//FINDING FIBONACCI OF NTH NUMBER
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    if (n == 1 || n == 0) {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main() {
    cout << fibonacci(7);
    return 0;
}