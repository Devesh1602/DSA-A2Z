#include<iostream>
#include<algorithm> 
#include<vector>
using namespace std;
bool sums(int index,int arr[], vector<int> &sub,int s,int sum,int n)
{
    if(index==n)
    {
        if(s==sum) //Apply Bool condition as we have to print only one answer so
        //no need of calling function again and again
        {
            //for(auto it:sub) cout<<it<<" "; (just to avoid warning, consider the statement)
            cout<<endl;
            return true;
        }
        else return false;
    }
    else
    {
        sub.push_back(arr[index]);
        s+=arr[index];
        if (sums(index+1,arr,sub,s,sum,n)==true)
        {
            return true;
        }
        s-=arr[index];
        sub.pop_back();
        if(sums(index+1,arr,sub,s,sum,n)==true)
        {
            return true;
        }
        return false;
    }
}
int main()
{
    int arr[]={1,2,1};
    int sum=2;
    vector<int> sub;
    sums(0,arr,sub,0,sum,3);
    return 0;
}