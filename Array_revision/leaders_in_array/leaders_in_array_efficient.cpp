#include<iostream>
using namespace std;

//start traversing from the end
//maintian a max_till_now variable 
//any time you encouter an element greater than that update it and print

void leaders(int arr[], int n) {
    int max_till_now = arr[n-1];
    for (int i = n-1; i >= 1; i--) {
        if (arr[i] > max_till_now) {
            max_till_now = arr[i];
            cout << max_till_now << " ";
        }
    }
}


int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    leaders(arr, 6);
    return 0;
}