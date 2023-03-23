#include<iostream>
using namespace std;

int largest(int arr[], int n) {
    int maxEle = arr[0];
    for (int i = 1; i < n; i++) {
        maxEle = max(arr[i], maxEle);
    }
    return maxEle;
}

int main() {
    int arr[] = {5, 8, 20, 15};
    cout << largest(arr, 4);
    return 0;
}