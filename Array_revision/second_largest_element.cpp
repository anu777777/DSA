//Second largest element in the array!
//arr[] = {12, 35, 1, 10, 34, 1}
//Initialize largest_ele = arr[0], second_largest = INT_MIN;
//Every time greater element is encountered:
//set second_larget = largest_ele, largest_ele = curr_ele
//DOESN'T HANDELS CORNER CASES!

#include<iostream>
using namespace std;

int secondLargest(int arr[], int n) {
    int largest_ele = arr[0];
    int second_largest = INT_MIN;
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest_ele) {
            second_largest = largest_ele;
            largest_ele = arr[i];
        }
    }
    return second_largest;
}

//Also handle the corner case:
//If curr_ele is smaller than largest_ele and greater than second-larget
//Try returning the index LOL

int Improved(int arr[], int n) {
    int first = 0, second = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[first]) {
            second = first;
            first = i;
        }
        else if (arr[i] < arr[first]) {
            if (second == -1 || arr[second] < arr[i]) {
                second = i;
            }
        }
    }
    return second;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    cout << secondLargest(arr, 6);
    int index = Improved(arr, 6);
    cout << arr[index];
    return 0;
}

