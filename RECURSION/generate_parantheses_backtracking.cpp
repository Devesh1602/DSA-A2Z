// Input: n = 3
// Output: ["((()))", "(()())", "(())()", "()(())", "()()()"]
#include <iostream>
#include <vector>
using namespace std;
void recurse(vector<string> &ans,string s, int open, int close, int n)
{
    if (open == n and close == n)
    {
        ans.push_back(s);
        return;
    }
    if (open < n)
        recurse(ans,s + "(", open + 1, close, n);
    if (close < open)
        recurse(ans,s + ")", open, close + 1, n);
}
vector<string> generateParenthesis(int n)
{
    vector<string> ans;
    //recurse("", 0, 0, n);
    return ans;
}
int main()
{
    int n=3;
    generateParenthesis(n);
}

/*APPROACH*/
/*The main idea to solve this problem is to use Recursion.
The Brute force approach is to consider every type of parentheses at each index and go to the next step of recursion, and check whether this lead to valid well-formed parentheses? If Yes, store the string as our answer, otherwise backtrack.
For an efficient solution, Start with an empty string and n number of open and close brackets (since we need to form n pairs).
At each step of recursion, the following cases hold:
Base Case: When a number of open and close brackets are both equal to n, store the current string as our answer.
When the number of opening brackets is strictly less than n, we can place the open bracket now.
When the number of closing brackets is strictly less than the number of closing brackets, we need to place the closing bracket now.
Whenever we’ll reach the base case, we will store the string formed into our answer which is the well-formed parentheses.
Return all the well-formed parentheses as our answer, in the form of a vector of strings.*/