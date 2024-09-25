#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n)
{
    if(n==1) return;

    int didSwap=0;
    for(int i=0;i<=n-2;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
            didSwap=1;
        }
    }
    if(didSwap==0)
    {
        return;
    }
    bubble_sort(arr,n-1);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" "<<endl;
    }
}