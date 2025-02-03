#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isOperator(char c)
{
    return (!isalpha(c) && !isdigit(c));
}
int getPriority(char c)
{
    if(c=='-' || c=='+') return 1;
    else if(c=='/' || c=='*') return 2;
    else if(c=='^') return 3;
    else
    return -1;
}
string infixtopostfix(string infix)
{
    infix='('+infix+')';
    int n=infix.size();
    stack<char> st;
    string ans;
    for(int i=0;i<n;i++)
    {
        if(isalpha(infix[i])||isdigit(infix[i]))
        {
            ans+=infix[i];
        }
        else if(infix[i]=='(')
        {
            st.push(infix[i]);
        }
        else if(infix[i]==')')
        {
            while(st.top()!='(')
            {
                ans+=st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            if(isOperator(st.top()))
            {
                if(infix[i]=='^')
                {
                    while(getPriority(infix[i])<=getPriority(st.top()))
                    {
                        ans+=st.top();
                        st.pop();
                    }
                }
                else
                {
                   while(getPriority(infix[i])<getPriority(st.top()))
                    {
                        ans+=st.top();
                        st.pop();
                    } 
                }
                st.push(infix[i]);
            }
        }
    }
    while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
}
string infixtoprefix(string infix)
{
    int n=infix.size();
    reverse(infix.begin(),infix.end());
    for(int i=0;i<n;i++)
    {
        if(infix[i]=='(')
        {
            infix[i]=')';
            i++;
        }
        else if(infix[i]==')')
        {
            infix[i]='(';
            i++;
        }
    }
    string prefix=infixtopostfix(infix);
    reverse(prefix.begin(),prefix.end());
    return prefix;
}
int main() {
  string s = ("(p+q)*(c-d)");
  cout << "Infix expression: " << s << endl;
  cout << "Prefix Expression: " << infixtoprefix(s) << endl;
  return 0;
}