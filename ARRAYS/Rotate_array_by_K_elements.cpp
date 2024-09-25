#include<iostream>
using namespace std;
void rotateArray(int arr[], int n, int k)
{
    k=k%n; // Reduce k to its smallest positive equivalent
    reverse(arr,arr+k); // Reverse the first k elements
    reverse(arr+k,arr+n); // Reverse the remaining elements
    reverse(arr,arr+n); // Reverse the entire array
}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
    int k=3;
    rotateArray(arr,n,k);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }cout<<endl;
}