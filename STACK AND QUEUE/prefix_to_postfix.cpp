#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isOperand(char c)
{
    return (c>='A' && c<='Z')||(c>='a' && c<='z');
}
string prefixtopostfix(string s)
{
    stack<string> st;
    int n=s.size();
    for(int i=n-1;i>=0;i--)
    {
        if(isOperand(s[i]))
        {
            st.push(string(1,s[i]));
        }
        else
        {
            string s1=st.top();
            st.pop();
            string s2=st.top();
            st.pop();
            st.push(s1+s2+s[i]);
        }
    }
    return st.top();
}
int main()
{
    string s="*-A/BC-/AKL";
    cout<<prefixtopostfix(s)<<endl;
}