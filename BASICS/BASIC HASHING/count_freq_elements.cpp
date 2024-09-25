/*
We can use a map of value and frequency pair, 
in which we can easily update the frequency of an element if it is already present in the map, 
if it is not present in the map then insert it in the map with frequency as 1. 
After completing all the iterations, print the value frequency pair. */

#include<iostream>
#include<unordered_map>
using namespace std;
 
void Frequency(int arr[], int n)
{
    unordered_map<int, int> map;
 
    for (int i = 0; i < n; i++)
        map[arr[i]]++;
 
    // Traverse through map and print frequencies
    //for (auto x : map)
      //  cout << x.first << " " << x.second << endl;
}
 
int main()
{
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Frequency(arr, n);
    return 0;
}