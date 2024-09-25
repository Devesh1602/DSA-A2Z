#include<iostream>
#include<vector>
using namespace std;
int sums(int index,int arr[],int s,int sum,int n,vector<int> &sub)
{
    if(index==n)
    {
        if(s==sum)
        {
            return 1;
        }
        return 0;
    }
    else
    {
        s+=arr[index];
        int l=sums(index+1,arr,s,sum,n,sub);
        s-=arr[index];
        int r=sums(index+1,arr,s,sum,n,sub);
        return l+r;
    }
}
int main()
{
    int arr[] = {1,2,1};
    int sum=2;
    vector<int> sub;
    cout<<sums(0,arr,0,sum,3,sub)<<endl;
}