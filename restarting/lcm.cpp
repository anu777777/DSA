//lcm : for any two given numbers it's lcm is that smallest number which is divisible by both of the numbers
// formula : a * b = lcm(a,b) * gcd(a,b)
#include<iostream>
using namespace std;

long long gcd(long long int a, long long int b) {
    return (b == 0)? a : gcd(b, a %b);
}

long long lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int a = 20, b = 15;
    cout << lcm(a,b);
    return 0;
}