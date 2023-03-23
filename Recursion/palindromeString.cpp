//PALINDROME CHECK USING RECURSION
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int start, int end) {
    if (s[start] >= s[end])
       return true;
    else if (s[start] != s[end])
       return false;
    isPalindrome(s, start + 1, end - 1);
}

bool isPalindromeRevised(string s, int start, int end) {
    if (start >= end) {
        return true;
    }
    return ((s[start] == s[end]) && isPalindrome(s, start + 1, end - 1));
}

int main() {
    string s1 = "abbcbba";
    string s2 = "geeks";
    if (isPalindrome(s1, 0, 6)) {
        cout << "A palindrome string!";
    }
    else {
        cout << "Not a palindrome string!";
    }
    cout << endl;
    if (isPalindrome(s2, 0, 4)) {
        cout << "A palindrome string!";
    }
    else {
        cout << "Not a palindrome string";
    }
    cout << endl;
    if (isPalindromeRevised(s1, 0, 6)) {
        cout << "A palindrome string!";
    }
    else {
        cout << "Not a palindrome string!";
    }
    cout << endl;
    if (isPalindromeRevised(s2, 0, 4)) {
        cout << "A palindrome string!";
    }
    else {
        cout << "Not a palindrome string";
    }
    return 0;
}