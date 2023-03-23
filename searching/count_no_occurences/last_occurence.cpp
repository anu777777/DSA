#include<iostream>
using namespace std;

//Recursive approach
int recursive(int arr[], int low, int high, int x, int n) {
    if (low > high)
       return -1;
    int mid = (low + high)/2;
    if (arr[mid] < x) {
        return recursive(arr, mid + 1, high, x, n);
    }
    else if (arr[mid] > x) {
        return recursive(arr, low, mid - 1, x, n);
    }
    else {
        if (mid == n-1 || arr[mid] != arr[mid+1]) {
            return mid;
        }
        else {
            return recursive(arr, mid+1, high, x, n);
        }
    }
    return -1;
}

//Iterative approach
int iterative(int arr[], int low, int high, int x, int n) {
    while (low <= high) {
        int mid = (low + high)/2;
        if (arr[mid] > x) {
            high = mid - 1;
        }
        else if (arr[mid] < x) {
            low = mid + 1;
        }
        else {
            if (mid == n-1 || arr[mid] != arr[mid + 1]) {
                return mid;
            }
            else {
                low = mid + 1;
            }
        }
    }
    return -1;
}

int main() {
    
   int arr[] = {5, 10, 10, 10, 10, 20, 20}, n = 7;

	int x = 10;

    cout << recursive(arr, 0, n - 1, x, n)<<"\n";
    cout << iterative(arr, 0, n -1, x, n);
	return 0;
}