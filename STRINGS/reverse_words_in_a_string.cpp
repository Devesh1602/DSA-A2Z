#include <iostream>
#include <string>
using namespace std;

string reverseWords(string s) {
    int n = s.length();
    int left = n - 1, right = n - 1;
    string result = "";

    while (left >= 0) {
        while (left >= 0 && s[left] == ' ') {
            left--;
        }
        if (left < 0) {
            break;
        }
        right = left;
        while (right >= 0 && s[right] != ' ') {
            right--;
        }
        if (result != "") {
            result += " ";
        }
        result += s.substr(right + 1, left - right);
        left = right - 1;
    }

    return result;
}

int main() {
    string input = "   hello    world   ";
    string res = reverseWords(input);
    cout << res << endl;
    return 0;
}
