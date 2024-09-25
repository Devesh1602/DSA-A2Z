#include<iostream>
using namespace std;
void triangle(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j >= 1; j--)
        {
            cout<<j%2;
        }cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    triangle(n);
}