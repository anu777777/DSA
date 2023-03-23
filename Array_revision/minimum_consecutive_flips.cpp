//MINIMUM CONSECUTIVE FLIPS
//arr[] = {1, 0, 0, 0, 1, 0, 0, 1, 0, 1}

//On facts
//There are two cases
//Either the no of gropus for 0's and 1's are the same -> print anyone doesn't matter
//Differece between no of groups b/w the two groups is 1 -> ignore the very first group
//Question turns out to be the first one!

//Fact :- Always flip the second group , they'll only have minimum group count in the latter case
//It's a binary array -> If there's only one group then diff is 1, add one group diff becomes zero
//add another new group diff becomes 1


//If two consecutive elements are different :- it's either the start or the end!


#include<iostream>
using namespace std;

void maxConsecutive(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i-1]) {
            if (arr[i] != arr[0]) {
                cout << "From index " << i << " ";
            }
            else {
                cout << "to the index " << (i-1) << endl;
            }
        }
    }
    //Explicitely handling the last case:
    if (arr[n-1] != arr[0]) {
        cout << "to the index " << (n-1) << endl;
    }
}

int main() {
    int arr[] = {1, 0, 0, 0, 1, 0, 0, 1, 0, 1};
    int n = 10;
    maxConsecutive(arr, 10);
    return 0;
}

