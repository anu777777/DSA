//Naive approach : traverse till N and check which all are divisible by N

//Better approch:
//Each divisor of N has a pair
//If y is a divisor greater than sqrt(N), then there exists its pair x which is also the divisor of N.
//If we find x then y can also be found.
//x*y = n

#include<iostream>
using namespace std;


void Divisors(int n) {
    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            if (n/i == i)
              cout << i <<" ";
            else {
                cout << n/i <<" "<< i <<" ";
            }
        }
        
    }
}

int main() {
    Divisors(50);
    return 0;
}