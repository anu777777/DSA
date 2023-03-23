#include<bits/stdc++.h>
using namespace std;

void leaders(int arr[], int n) {
    int lead = arr[n-1];
    cout << lead <<" ";
    for (int i = n-1; i>=0; i--) {
        if (arr[i] > lead) {
            cout << arr[i] <<" ";
            lead = arr[i];
        }
    }
}

int main() {
    int arr[] = {7, 10, 4, 3, 6, 5, 2};
    leaders(arr, 7);
    return 0;
}