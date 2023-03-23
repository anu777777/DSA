//Efficient approach
//While n is divisible by 2, divide it by 2. Do the same with 3!
//Start the loop with 5, and increment i with i + 6, 
// for each iteration check if the ith and (i+2)th element is divisile by n
//if any of these numbers are divisible then print those numbers
//Check if n is still greater than 3, print that number!

#include<iostream>
using namespace std;

void PrimeFactors(int n) {
    while (n%2 == 0) {
        cout << "2" <<" ";
        n = n/2;
    }
    while (n % 3 == 0) {
        cout << "3" <<" ";
        n = n/3;
    }
    for (int i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0) {
            cout << i <<" ";
            n = n/i;
        }
        if (n % (i + 2) == 0) {
            cout << i + 2 <<" ";
            n = n/(i+2);
        }
    }
    if (n > 3)
      cout << n <<endl;
}

int main() {
    PrimeFactors(1092);
    return 0;
}