//GENERATE SUBSETS OF A STRING
#include<bits/stdc++.h>
using namespace std;

void generateSubstrings(string str, string curr, int i) {
    if (str.size() == i) {
        cout << curr <<" ";
        return;
    }
    generateSubstrings(str, curr, i+1);
    generateSubstrings(str, curr+str[i], i+1);
}

int main() {
    generateSubstrings("ABC", "",0);
    return 0;
}