//Logic -> Number of 2's is always greater than the number of 5's
//Therefore it's done if we just calculate the number of 5's. How?
// floor(n/5) but for numbers greater than 5? divide by 25 and so on

#include<iostream>

using namespace std;

int trailingZeros(int num) {
    if (num < 0)
      return -1;
    int count = 0;
    for (int i = 5; num/i >= 1; i *= 5) {
        count += num/i;
    }
    return count;
}

int main() {
    cout << "The total number of traling 0's in factorial of 100 is:" << trailingZeros(100);
    return 0;
}