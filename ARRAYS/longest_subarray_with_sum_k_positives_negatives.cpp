/*
Approach using HASHING

We have an array a containing some numbers and a target sum k.
We want to find the length of the longest subarray in a whose sum is equal to k.
We use a map called preSumMap to store the prefix sums encountered while iterating through the array.
We initialize sum as 0 to keep track of the current prefix sum.
We also initialize maxLen as 0, which will store the length of the longest subarray with sum k.
We iterate through the array from left to right.
In each iteration, we add the current element to the sum and check if it is equal to k.
If it is equal to k, we update maxLen with the current index + 1 (since indexing starts from 0).
Next, we calculate the remaining sum required to reach k by subtracting k from the current sum. Let's call it rem.
We check if rem exists in the preSumMap. If it does, it means that there is a subarray with sum rem that ends before the current index.
If it exists, we calculate the length of that subarray (which is i - preSumMap[rem]) and update maxLen if necessary.
Finally, we update the preSumMap with the current sum if it doesn't already exist. This is done to keep track of the earliest index at which a particular sum occurs.
After iterating through the entire array, we have the length of the longest subarray with sum k stored in maxLen.
We return maxLen as the result.



#include<iostream>
#include<vector>
#include<map>
using namespace std;

int getLongestSubarray(vector<int>& a, int k) {
    int n = a.size(); // size of the array.

    map<int, int> preSumMap;
    int sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        //calculate the prefix sum till index i:
        sum += a[i];

        // if the sum = k, update the maxLen:
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        // calculate the sum of remaining part i.e. x-k:
        int rem = sum - k;

        //Calculate the length and update maxLen:
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        //Finally, update the map checking the conditions:
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }

    return maxLen;
}

int main()
{
    vector<int> a = { -1, 1, 1};
    int k = 1;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
*/