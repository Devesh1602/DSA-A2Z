#include <iostream>
#include <unordered_map>
using namespace std;
void highlow(int arr[], int n)
{
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }
    /*for (auto x : map)
    {
        cout << x.first <<" "<< x.second << endl;
    }
    int maxi,mini;
    for(auto x:map)
    {
        maxi=max(maxi,x.second);
        mini=min(mini,x.second);
    }
    cout<<"Maximum"<<" "<<maxi<<endl;
    cout<<"Minimum"<<" "<<mini<<endl;
    */
}
//{10,10,15,5,6,6,7};
// 10-2;
// 6-2;
// Remaining one is 1
int main()
{
    int arr[] = {10, 10, 15, 5, 6, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    highlow(arr, n);
}