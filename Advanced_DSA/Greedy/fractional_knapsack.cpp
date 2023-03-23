#include<bits/stdc++.h>
using namespace std;

bool myCmp(pair<int, int>a, pair<int, int>b) {
    bool r1 = (double)a.first/a.second;
    bool r2 = (double)b.first/b.second;
    return r1 > r2;
}

double fractionalKnap(pair<int, int> arr[], int weight, int n) {
    double res = 0.0;
    sort(arr, arr+n, myCmp);
    for (int i = 0; i < n; i++) {
        if (arr[i].second <= weight) {
            res += arr[i].first;
            weight = weight - arr[i].second;
        }
        else {
            res += arr[i].first * ((double)weight/arr[i].second);
            break;
        }
    }
    return res;
}

int main() {
    pair <int,int> arr[] = {make_pair(120,30), make_pair(100,20), make_pair(60,10)};
    int weight = 50, n = 3;
    cout << fractionalKnap(arr, weight, n);
    return 0;
}