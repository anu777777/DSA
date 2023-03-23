//Algorithm
//Create boolean array of size n -> true
//loop -> till size n
//if ith element is true
//loop -> i*i till nth element
//the element which will be divisible will be marked as false
//elements which remain true are prime elements

#include<iostream>
using namespace std;

void SieveOfEratosthenes(int n) {
    bool isPrime[n+1];
    memset(isPrime, true, sizeof(isPrime));

    for (int i = 2; i*i <= n; i++) {
        if (isPrime[i]) {
            for (int p = i*i; p <= n; p++) {
                if (p%i == 0)
                   isPrime[p] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i <<" ";
        }
    }
    cout <<"1 % 2 is : " << 1%2 <<endl;
}

int main() {
    SieveOfEratosthenes(50);
    return 0;
}