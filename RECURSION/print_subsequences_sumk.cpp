#include<iostream> 
#include<algorithm>
#include<vector>
using namespace std;
void sums(int index,int arr[], vector<int> &sub,int s,int sum,int n)
{
    if(index==n)
    {
        if(s==sum)
        {
            for(auto it:sub)
            {
                cout<<it<<" ";
            }cout<<endl;
        }
    }
    else
    {
        sub.push_back(arr[index]);
        s+=arr[index];
        sums(index+1,arr,sub,s,sum,n);
        s-=arr[index];
        sub.pop_back();
        sums(index+1,arr,sub,s,sum,n);
    }
}
int main()
{
    int arr[]={1,2,1};
    int sum=2;
    vector<int> sub;
    sums(0,arr,sub,0,sum,3);
}