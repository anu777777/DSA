//Prefix Sum Array
#include<iostream>
using namespace std;

void calcPrefixSum(int arr[], int n) {
    int prefixArray[n];
    prefixArray[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefixArray[i] = arr[i] + prefixArray[i-1];
    }
    cout << "Following is the array elements : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] <<" ";
    }
    cout << "\nThis is the prefixSum array of those elements : ";
    for (int i = 0; i < n; i++) {
        cout << prefixArray[i] <<" ";
    }
}


int main() {
    int n = 4;
  	int arr[] = { 10, 4, 16, 20 };
    calcPrefixSum(arr, n);
    return 0;
}