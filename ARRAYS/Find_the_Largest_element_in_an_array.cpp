#include<iostream>
using namespace std;
int largeElement(int arr[],int n)
{
    int maxi=arr[0];
    for(int i=0;i<n;i++)
    {
        if(maxi<arr[i])
        {
            maxi=arr[i];
        }
    }
    return maxi;
}

int main()
{
    int arr[]={3,7,5,6,9,1,2,8};
    int n=8;
    cout<<largeElement(arr,n)<<endl;
}