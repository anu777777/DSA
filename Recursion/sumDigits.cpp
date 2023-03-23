//CALCULATE THE SUM OF DIGITS IN A NUMBER
#include<bits/stdc++.h>
using namespace std;

int sumD(int num) {
    if (num == 0) {
        return 0;
    }
    return num%10 + sumD(num/10);
}

int main() {
    cout << sumD(999);
    return 0;
}