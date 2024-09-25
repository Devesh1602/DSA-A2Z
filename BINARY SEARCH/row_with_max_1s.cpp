/*int lowerbound(vector<int> &arr, int n, int x)
{
    int low=0,high=n-1;
    int ans=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>=x)
        {
            ans=mid; 
            high=mid-1;
        }
        else low=mid+1;
    }
}

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    //    Write your code here.
    int index=-1;
    int max_count=0;
    for(int i=0;i<n;i++)
    {
        int count=m-lowerbound(matrix[i],m,1);
        if(count>max_count)
        {
            max_count=count;
            index=i;
        }
    }
    return index;
}
*/