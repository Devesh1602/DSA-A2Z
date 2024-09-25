// C++ code to print all possible 
// subsequences for given array using
// recursion
#include <iostream>
#include<vector>
using namespace std;
// Recursive function to print all
// possible subsequences for given array
void printSubsequences(int arr[], int index, vector<int> &subarr, int n)
{
    // Print the subsequence when reach
    // the leaf of recursion tree
    if (index == n)
    {
        for (int i=0;i<n;i++)
        { // Print array
            cout << arr[i] << " ";
        }cout<<endl;
        if (subarr.size() == 0)
        {
            cout << "{}" << endl;
            return;
        }cout<<endl;
    }
    else
    {
        // pick the current index into the subsequence.
        subarr.push_back(arr[index]);

        printSubsequences(arr, index + 1, subarr, n);

        subarr.pop_back();

        // not picking the element into the subsequence.
        printSubsequences(arr, index + 1, subarr, n);
    }
}

// Driver Code
int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> subarr;

    printSubsequences(arr, 0, subarr, n);

    return 0;
}