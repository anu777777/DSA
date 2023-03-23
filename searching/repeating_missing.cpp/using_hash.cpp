//Create a hash array of n length
//As I traverse the array keep incrementing the value for that index
//Traverse and again, all those elemnets whose value is 0 are missing elements and whose value is 2 are repeating
#include<bits/stdc++.h>
using namespace std;

void repeating_missing(vector<int>v, int n) {
    int arr[n+1];
    for (int i = 0; i < n; i++) {
        arr[i] = 0;
    }
    for (int i = 0; i <n; i++) {
        arr[v[i]]++;
    }
    for (int i = 1; i <=n; i++) {
        if (arr[i] == 0) {
            cout << "The missing element is : " << i <<endl;
        }
        if (arr[i] == 2) {
            cout << "The repeating element is : " << i << endl;
        }
    }
}

int main() {
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    repeating_missing(v, 5);
    return 0;
}