//PRINT N TO 1 USING RECURSION

#include<bits/stdc++.h>
using namespace std;

void func(int n) {
    if (n == 0)
       return;
    cout << n <<" ";
    func(n-1);
}

int main() {
    func(5);
    return 0;
}