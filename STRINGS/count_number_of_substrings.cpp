#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int countSubstringsWithKDistinct(string s, int K) {
    int count = 0;
    int n = s.length();
    int left = 0;
    unordered_map<char, int> charCount;

    for (int right = 0; right < n; ++right) {
        charCount[s[right]]++;

        while (charCount.size() > K) {
            charCount[s[left]]--;
            if (charCount[s[left]] == 0) {
                charCount.erase(s[left]);
            }
            left++;
        }

        count += (right - left + 1);
    }

    return count;
}

int main() {
    string s = "abacab";
    int K = 2;
    int result = countSubstringsWithKDistinct(s, K);
    cout << "Count: " << result << endl;
    return 0;
}
