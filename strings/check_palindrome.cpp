//Use the iterators begin, end
#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string input) {
    string::iterator begin = input.begin();
    string::iterator end = input.end()-1;
    while (begin < end) {
        if (*end != *begin) {
            return false;
        }
        begin++;
        end--;
    }
    return true;
}

int main() {
    string test1 = "anna";
    string test2 = "anu";
    cout << isPalindrome(test1) <<" ";
    cout << isPalindrome(test2) <<" ";
    return 0;
}