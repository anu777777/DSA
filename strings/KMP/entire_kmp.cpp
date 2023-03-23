//Approach for the KMP Algorithm
//Strat matching the pat[j] with txt[i]
//Could be any one among two : it can match or it coudn't
//If it matches:
//Increment both i and j
//If j == m : match found, return 'j-m', j = lps[j-1]

//If it doesn't match:
//if (j == 0) then increment i
// else j = lps[j-1]

#include<iostream>
using namespace std;

void FillLPS(string pat[], int lps[]) {
    lps[0] = 0;
    
}


void KMP() {

}


int main() {
    return 0;
}