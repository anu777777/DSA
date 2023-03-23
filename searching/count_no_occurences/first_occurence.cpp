//logic in the copy
#include<iostream>
using namespace std;

//Recursive approach
int firstOcc(int arr[], int low, int high, int x) {
    if (low > high)
       return -1;
    int mid = (low + high)/2;
    if (arr[mid] < x) {
        return firstOcc(arr, mid + 1, high, x);
    }
    else if (arr[mid] > x) {
        return firstOcc(arr, low, mid - 1, x);
    }
    else {
        if (mid == 0 || arr[mid - 1] != arr[mid]) {
            return mid;
        }
        else {
            return firstOcc(arr, low, mid-1, x);
        }
    }
    return -1;
}

//Iterative approach
int iterartive(int arr[], int low, int high, int x) {
    while (low <= high) {
        int mid = (low + high)/2;
        if (arr[mid] < x) {
            low = mid + 1;
        }
        else if (arr[mid] > x) {
            high = mid - 1;
        }
        else {
            if (mid == 0 || arr[mid] != arr[mid-1]) {
                return mid;
            }
            else {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    
    int arr[] = {5, 10, 10, 15, 20, 20, 20}, n = 7;

	int x = 20;
	
	cout<<firstOcc(arr, 0, n - 1, x);
    cout << iterartive(arr, 0, n-1, x);
	return 0;
}