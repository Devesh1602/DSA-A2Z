/*
APPROACH 1
class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int count = 0;
        int maxCount = 0; // Initialize maxCount to 0
        for (char i : s) {
            if (i == '(') {
                count++;
            } else if (i == ')') {
                maxCount = max(maxCount, count);
                count--;
            }
        }
        return maxCount;
    }
};
APPROACH 2
class Solution {
public:
    int maxDepth(string s) {
        stack<char> st; // Create a stack to track open parentheses
        int maxi = 0; // Variable to store the maximum depth
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push('('); // Push an open parenthesis onto the stack
            } else if (s[i] == ')') {
                int x = st.size(); // Get the current depth (size of the stack)
                maxi = max(maxi, x); // Update the maximum depth
                st.pop(); // Pop the corresponding open parenthesis from the stack
            }
        }
        return maxi; // Return the maximum depth
    }
};
*/