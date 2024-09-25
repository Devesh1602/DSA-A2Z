#include<iostream>
using namespace std;
void printlinear(int i,int n)
{
   if(i>n)
   {
       return;
   }
   cout<<"Devesh"<<endl;
   return printlinear(i+1,n);
}
int main()
{
    int n;
    cin>>n;
    printlinear(1,n);
}