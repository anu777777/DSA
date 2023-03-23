#include<iostream>
using namespace std;

bool isPalindrome(int num) {
    int temp = num;
    int revSum = 0;
    while (temp != 0) {
        int rem = temp % 10;
        revSum = revSum * 10 + rem;
        temp = temp/10;
    }
    if (num == revSum)
       return true;
    return false;
}

int main() {
    int num = 2002;
    if (isPalindrome(num)) {
        cout << "This is a palinddrome number!";
    }
    else {
        cout << "This is not a palindrome number!";
    }
    return 0;
}