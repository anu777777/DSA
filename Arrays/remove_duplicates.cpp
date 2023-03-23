//REMOVE DUPLICATES FROM THE SORTED ARRAY

#include<bits/stdc++.h>
using namespace std;

int removedup(int arr[], int n) {
    int prev = arr[0];
    int size = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != prev) {
            prev = arr[i];
            size++;
        }
    }
    return size;
}

int main() {
    int arr[] = {10, 20, 20, 30, 50, 50, 90};
    cout << removedup(arr, 7);
    return 0;
}