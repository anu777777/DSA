#include<iostream>
using namespace std;

//For any two numbers it's GCD is that number which divides both of them and is greatest!
//Approach 1:
//Use euclidean algorithm
//Repetedly substract the larger number from smaller one
//Once any one of these becomes 0, we return the latter one
int approach1(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;
    if (a == b) return a;
    if (a > b) 
        return approach1(a-b, b);
    return approach1(a, b - a);
}

//Approach 2:
//Insead of using substraction use modulo operation, if the number becomes 0, return the one which isn't zero
//divide larger number with the smaller number


int approach2(int a, int b) {
    return (b == 0) ? a : approach2(b, a % b);
}
//a = 98, b = 56
int main() {
    int a = 98;
    int b = 56;
    cout << approach1(a, b);
    cout << endl;
    cout << approach2(a, b);
    return 0;
}