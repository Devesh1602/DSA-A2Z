#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isOperand(char c)
{
    return (c>='A' && c<='Z')||(c>='a' && c<='z');
}
string postfixtoprefix(string s)
{
    stack<string> st;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(isOperand(s[i]))
        {
            st.push(string(1, s[i]));
        }
        else
        {
            string s1=st.top();
            st.pop();
            string s2=st.top();
            st.pop();
            st.push(s[i]+s2+s1);
        }
    }
    return st.top();
}
int main()
{
    string s="ABC/-AK/L-*";
    cout<<postfixtoprefix(s)<<endl;
}