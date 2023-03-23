//Two strings are said to be anagrams of each other if the permutation of both these string is same
//create a frequency array
//Calculate the frequency of each element
//Run a loop, and check if the frequency mathes
#include<iostream>
#include<string>
#define NO_OF_CHARS 256
using namespace std;

bool areAnagram(char *str1, char* str2) {
    int c1[NO_OF_CHARS] = {0};
    int c2[NO_OF_CHARS] = {0};
    int i;
    for (i = 0; str1[i] && str2[i]; i++) {
        c1[str1[i]]++;
        c2[str2[i]]++;
    }
    if (str1[i] || str2[i])
       return false;
    for (int i = 0; i < NO_OF_CHARS; i++) {
        if (c1[i] != c2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str1[] = "geeksforgeeks";
    char str2[] = "forgeeksgeeks";
  
    // Function Call
    if (areAnagram(str1, str2))
        cout << "The two strings are anagram of each other";
    else
        cout << "The two strings are not anagram of each "
                "other";

    return 0;
    return 0;
}