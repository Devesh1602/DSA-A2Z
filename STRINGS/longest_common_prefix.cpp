/*#include<iostream>
#include<string>
#include<vector>
using namespace std;
string longestCommonPrefix(vector<string>&v)
{
    if(v.empty()) return "";
    string first=v[0];
    string last=v[0];
    for(auto str:v)
    {
        if(str<first) first=str;
        if(str>last) last=str;
    }
    int n=min(first.size(),last.size());
    int i=0;
    while(i<n && first[i]==last[i])
    {
        i++;
    }
    return first.substr(0,i);
}
int main()
{
    vector<string> v={"flower","flow","flight"};
    cout<<longestCommonPrefix(v)<<endl;
}
*/