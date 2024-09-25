#include<iostream>
using namespace std;
int secondSmallest(int arr[],int n)
{
    if(n<2) return -1;
    int small=INT_MAX;
    int ssmall=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<small)
        {
            ssmall=small;
            small=arr[i];
        }
        else if(arr[i]<ssmall && arr[i]!=small)
        {
            ssmall=arr[i];

        }
    }
    return ssmall;
}
int secondLargest(int arr[],int n)
{
    if(n<2) return -1;
    int large=INT_MIN;
    int slarge=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>large)
        {
            slarge=large;
            large=arr[i];
        }
        else if(arr[i]>slarge && arr[i]!=large)
        {
            slarge=arr[i];

        }
    }
    return slarge;
}
int main() {
    int arr[]={1,2,4,7,7,5};  
    int n=sizeof(arr)/sizeof(arr[0]);
    int sS=secondSmallest(arr,n);
    int sL=secondLargest(arr,n);
    cout<<"Second smallest is "<<sS<<endl;
    cout<<"Second largest is "<<sL<<endl;
    return 0;
}