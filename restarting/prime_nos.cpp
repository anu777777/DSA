//Prime number : A number divisible only by 1 and itself
//Naive appraoch : Iterate from 2 to n and check if any number is divisible by the ith number, return true
#include<iostream>
using namespace std;

bool naive_approach(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n; i++) {
        if (n % i == 0)
           return false;
    }
    return true;
}

//Approach 2 : If any number y is a divisor of given number n, then there exists a pair (x, y) where x is always
//smaller than sqrt(n)
//So, no need to proceed after sqrt(n)
// n = divisors(x, y)

bool approach2(int n) {
    if (n <= 1) return false;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0)
           return false;
    }
    return true;
}

//Approach 3 : If a number is divisible by 2 and 3 then it's already non-prime
//But we need to have a seprate check for 2 and 3 declaring them as prime nos first
//All even nos expect 2 are non primes so they can be skipped as well
//So start iterating from 5, and in each iteration the step should be 6, and in each iteration we'll check for two odd nos

bool best_approach(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0)
           return false;
    }
    return true;
}


int main() {
    int n_check1 = 11;
    cout << naive_approach(n_check1);
    cout << approach2(n_check1);
    cout << best_approach(n_check1);
    return 0;
}
