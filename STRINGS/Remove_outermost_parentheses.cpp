// C++ Program for the above approach
#include <iostream>
#include <string>
using namespace std;

// function to remove outer parentheses
string removeOuterParentheses(string s) {
	int openCount = 0;
	int closeCount = 0;
	string result = "";
	int start = 0;

	for (int i = 0; i < s.length(); i++) {
		char c = s[i];
		if (c == '(') {
			openCount++;
		} else if (c == ')') {
			closeCount++;
		}

		if (openCount == closeCount) {
			result += s.substr(start+1, i-start-1);
			start = i+1;
		}
	}
	// return the output string(result)
	return result;
}

// driver program to test above function
int main() {
	// Example 1
	string s1 = "(()())(())()";
	cout << removeOuterParentheses(s1) << endl;

	// Example 2
	string s2 = "()()(()())(()())";
	cout << removeOuterParentheses(s2) << endl;

	// Example 3
	string s3 = "((()))(())";
	cout << removeOuterParentheses(s3) << endl;

	return 0;
}
