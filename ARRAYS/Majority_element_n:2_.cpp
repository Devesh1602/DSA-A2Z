/*
The provided code is an implementation of the Boyer-Moore Voting Algorithm to find the majority element in an array `nums`. Here's an explanation of how the code works:

1. The `majorityElement` function takes a reference to a vector `nums` as input and returns the majority element.

2. The variables `count` and `candidate` are initialized to 0. `count` keeps track of the current count of the majority candidate, and `candidate` stores the current majority candidate.

3. The code iterates through each element `num` in the `nums` array.

4. Inside the loop:
   - If `count` is 0, it means we need to update the `candidate` since the previous candidate has been eliminated. So, the current element `num` becomes the new `candidate`.
   - If the current element `num` is the same as the `candidate`, we increment the `count` by 1, indicating that we have found another occurrence of the majority element.
   - If the current element `num` is different from the `candidate`, we decrement the `count` by 1, indicating that we have found a non-majority element that cancels out a previous occurrence.

5. By the end of the loop, the `candidate` will hold the majority element since it survived all the cancellations. If there is a majority element in the array, it will be the value stored in `candidate`.

6. Finally, the `candidate` is returned as the majority element.

The Boyer-Moore Voting Algorithm guarantees that if there is a majority element in the array, it will be correctly identified by this algorithm. It works based on the intuition that a majority element will have a count greater than the combined count of all other elements.

I hope this explanation clarifies how the code works. Let me know if you have any further questions!


#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {

    //size of the given array:
    int n = v.size();
    int cnt = 0; // count
    int el; // Element

    //applying the algorithm:
    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = v[i];
        }
        else if (el == v[i]) cnt++;
        else cnt--;
    }

    //checking if the stored element
    // is the majority element:
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == el) cnt1++;
    }

    if (cnt1 > (n / 2)) return el;
    return -1;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}
*/