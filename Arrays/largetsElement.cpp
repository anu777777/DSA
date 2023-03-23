#include<bits/stdc++.h>
using namespace std;

int largest(int arr[], int n) {
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[res]) {
            res = i;
        }
    }
    return res;
}

int SecondLargest(int arr[], int n) {
    int largest = 0, seclargest = largest;
    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[largest]) {
            seclargest = largest;
            largest = i;
        }
        else if (arr[i] > arr[seclargest]) {
            seclargest = i;
        }
    }
    return seclargest;
}

int main() {
    int arr[] = {4, 21, 55, 7};
    cout << largest(arr, 4) << endl;
    cout << SecondLargest(arr, 4);
    return 0;
}