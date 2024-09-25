/*#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
bool isIsomorphic(string s, string t)
{
    unordered_map<char, char> mpp1,mpp2;
    for(int i=0;i<s.length();i++)
    {
        if(mpp1[s[i]] && mpp1[s[i]]!=t[i]) return false;
        if(mpp2[t[i]] && mpp2[t[i]]!=s[i]) return false;
        mpp1[s[i]]=t[i];
        mpp2[t[i]]=s[i];
    }
    return true;
}
int main()
{
    string s,t;
    cin>>s>>t;
    cout<<isIsomorphic(s,t)<<endl;
}
*/