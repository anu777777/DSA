//Sort the given array
//Travere and check for repeating and missing elements

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int reapating_element(vector<int>a) {
    for (int i = 1; i < a.size(); i++) {
        if (a[i] == a[i-1]) {
            return a[i];
        }
    }
    return -1;
}

int missing_element(vector<int>a) {
    for (int i = 1; i < a.size(); i++) {
        if (a[i] - a[i-1] > 1) {
            return (a[i] - 1);
        }
    }
    return -1;
}



int main() {
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    if (reapating_element(v) == -1) {
        cout << "There's no repeating elements" <<endl;
    }
    else {
        cout << "The reapeating element is: " << reapating_element(v) << endl;
    }
    if (missing_element(v) == -1) {
        cout << "There's no missing elements" <<endl;
    }
    else {
        cout << "The reapeating element is: " << missing_element(v) << endl;
    }
    return 0;
}