/*
Example 1:
Input: N = 12345
Output: 5
Explanation: N has 5 digits
*/
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int countdigits(int n)
{
    string x=to_string(n);
    return x.length();
}
int main()
{
    int n=12345;
    cout<<countdigits(n)<<endl;
}