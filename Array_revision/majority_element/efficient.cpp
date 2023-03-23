//Majority element -> element with maximum count, should appear more than n/2 times
//Concept :- Moore's Vooting algorithm
// Initialize first index as max_ele , count = 1
//For each ele check 
// if max_ele equals curr_ele -> incement the count else decement the count
//if in case the count becomes zero reinialilize the count to 1 and max_ele to curr_ele

#include<iostream>
using namespace std;

int findCandidate(int arr[], int n) {
    int max_ele = 0, cnt = 1;
    for (int i = 1; i < n; i++) {
        if (arr[max_ele] == arr[i]) {
            cnt++;
        }
        else {
            cnt--;
        }
        if (cnt == 0) {
            max_ele = i;
            cnt = 1;
        }
    }
    return max_ele;
}

bool isMajority(int arr[], int n) {
    int cand = findCandidate(arr, n);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[cand]) {
            count++;
        }
    }
    if (count > n/2) {
        return true;
    }
    return false;
}

void printMajority(int arr[], int n) {
    if (isMajority(arr, n)) {
        int cand = findCandidate(arr, n);
        cout << "The majority element is : " << arr[cand];
    }
    else {
        cout << "No majority element!";
    }
}

int main() {
    int a[] =  {3, 4, 3, 2, 4, 4, 4, 4};
    printMajority(a, 8);
    return 0;
}