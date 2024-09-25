/*#include<iostream>
#include<vector>
using namespace std;
int countStudents(vector<int> &arr, int pages)
{
    int n=arr.size();
    int cntStudents=1;
    int pageCnt=0;
    for(int i=0;i<n;i++)
    {
        if(pageCnt+arr[i]<=pages)
        {
            pageCnt+=arr[i];
        }
        else
        {
            cntStudents++;
            pageCnt=arr[i];
        }
    }
    return cntStudents;
}

int findPages(vector<int> &arr,int N, int m)
{
    int n=arr.size();
    int low= *max_element(arr.begin(),arr.end());
    int high=0;
    for(int i=0;i<n;i++)
    {
        high+=arr[i];
    }
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(countStudents(arr,mid)>m)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return low;
}

int main()
{
    vector<int> arr={12, 34, 67, 90};
    int m=2;
    int N=4;
    cout<<findPages(arr,N,m)<<endl;
}
*/