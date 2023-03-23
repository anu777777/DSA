//LEFT ROTATE AN ARRAY BY ONE

#include<bits/stdc++.h>
using namespace std;

void leftrotate(int arr[], int n) {
    int temp = arr[0];
    for (int i = 0; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    leftrotate(arr, 5);
    for (int i = 0; i < 5; i++) {
        cout << arr[i] <<" ";
    }
    return 0;
}