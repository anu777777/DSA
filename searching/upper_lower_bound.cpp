#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    for (int i = 10; i < 60; i+=10) {
        v.push_back(i);
    }
    cout << "Vector contains the following:\n";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] <<" ";
    }
    cout <<"\n";
    vector <int> :: iterator upper1, upper2;
    upper1 = upper_bound(v.begin(), v.end(), 35);
    upper2 = upper_bound(v.begin(), v.end(), 45);
    cout << "The upper bound for the element 35 is : " << upper1 - v.begin() << endl;
    cout << "The upper bound for the element 45 is : " << upper2 - v.begin() << endl;

    vector<int> :: iterator lower1, lower2;
    lower1 = lower_bound(v.begin(), v.end(), 20);
    lower2 = lower_bound(v.begin(), v.end(), 55);
    cout << "The lower bound for the element 35 is : " << lower1 - v.begin()<< endl;
    cout << "The lower bound for the element 45 is : " << lower2 - v.begin() << endl;
    return 0;
}