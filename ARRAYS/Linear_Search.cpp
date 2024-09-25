#include<iostream>
using namespace std;
int linearsearch(int arr[],int n, int target)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,5,9,4};
    int n=6;
    int target=5;
    cout<<linearsearch(arr,n,target)<<endl;

}