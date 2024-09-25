#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool rotateString(string s, string goal)
{
    int n=s.length();
    if(n!=goal.length()) return false;
    for(int i=0;i<n;i++)
    {
        if(s==goal) {return true;}
        rotate(s.begin(),s.begin()+1,s.end());
    }
    return true;
}
int main()
{
    string s,goal;
    cin>>s>>goal;
    cout<<rotateString(s,goal)<<endl;
}
