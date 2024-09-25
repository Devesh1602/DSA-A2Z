#include<iostream>
using namespace std;
int longestSubarray(int arr[], int n, int k)
{
    //Using two pointer approach
    int left=0,right=0;
    int len=0;
    int sum=arr[0];
    while(right<n)
    {
        while(left<=right && sum>k)
        {
            sum-=arr[left];
            left++;
        }
        if(sum==k)
        {
            len=max(len,right-left+1);
        }
        right++;
        sum+=arr[right];
    }
    return len;
}

int main()
{
    int arr[]={1,2,3,1,1,1,4,6};
    int n=8;
    int k=5;
    cout<<longestSubarray(arr,n,k)<<endl;
}