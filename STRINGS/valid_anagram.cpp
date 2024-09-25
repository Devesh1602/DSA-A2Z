/*#include <iostream>
#include <vector>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
        return false;
    }
    
    vector<int> count(128);
    
    for (auto c : s) {
        count[c]++;
    }
    
    for (auto c : t) {
        count[c]--;
        if (count[c] < 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    string s1 = "anagram";
    string t1 = "nagaram";
    
    if (isAnagram(s1, t1)) {
        cout << "Strings are anagrams." << endl;
    } else {
        cout << "Strings are not anagrams." << endl;
    }
    
    string s2 = "hello";
    string t2 = "world";
    
    if (isAnagram(s2, t2)) {
        cout << "Strings are anagrams." << endl;
    } else {
        cout << "Strings are not anagrams." << endl;
    }
    
    return 0;
}
*/