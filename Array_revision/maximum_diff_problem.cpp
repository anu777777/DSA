//MAXIMUM DIFFERENCE PROBLEM WITH ORDER
//2, 3, 10, 6, 4, 8, 1
//Naive solution

#include<iostream>
using namespace std;

int naive(int arr[], int n) {
    int max_diff = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            max_diff = max(max_diff, arr[j]-arr[i]);
        }
    }
    return max_diff;
}

//Efficient solution
//hint : maintain a minimum_ele which store the minimum valued element from the array

int efficient(int arr[], int n) {
    int min_val = arr[0];
    int max_diff = INT_MIN;
    for (int i = 1; i < n; i++) {
        max_diff = max(max_diff, arr[i] - min_val);
        min_val = min(min_val, arr[i]);
    }
    return max_diff;
}

int main() {
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    cout << naive(arr, 7);
    cout << endl;
    cout << efficient(arr, 7);
    return 0;
}