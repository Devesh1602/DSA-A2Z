#include<iostream>
#include<string>
using namespace std;
void checkpalindrome(int n)
{
    string s=to_string(n);
    int start=0;
    int end=s.length()-1;
    while(start<end)
    {
        if(s[start++]!=s[end--])
        {
            cout<<"Not Palindrome Number"<<endl;
        }
        else
        {
            cout<<"Palindrome Number"<<endl;
        }
    }
}
int main()
{
    int n=121;
    checkpalindrome(n);
}