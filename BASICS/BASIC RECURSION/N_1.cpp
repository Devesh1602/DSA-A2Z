#include<iostream>
using namespace std;
void printlinear(int i,int n)
{
   if(i<1)
   {
       return;
   }cout<<i<<" ";
   return printlinear(i-1,n);
}
int main()
{
    int n;
    cin>>n;
    printlinear(n,n);
}