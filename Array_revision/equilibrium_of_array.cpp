//Equilibrium of the array : It's an index such that (sum of leftmost elements = sum of rightmost elements)
//Algorithm:
//1. Calculate the total sum.
//2. Run a for loop a) subtract ith index from total sum b) check if leftsum equals t_sum 
// c) Add the ith index to the leftsum


#include<iostream>
using namespace std;

int equilirium_index(int arr[], int n) {
    int t_sum = 0;
    for (int i = 0; i < n; i++) {
        t_sum += arr[i];
    }
    int leftsum = 0;
    for (int i = 0; i < n; i++) {
        t_sum -= arr[i];
        if (t_sum == leftsum) {
            return i;
        }
        leftsum += arr[i];
    }
    return -1;
}

int main() {
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int n = 7;
    cout << equilirium_index(arr, n);
    return 0;
}