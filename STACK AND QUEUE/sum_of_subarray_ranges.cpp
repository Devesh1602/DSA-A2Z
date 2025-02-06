/*
Intuition
To solve the problem, the key is to leverage the properties of the next and previous smaller/larger elements in an array. These elements define the contribution of each number in the array to the sum of subarray ranges, where:

The next and previous smaller elements determine how many subarrays include the current element as the smallest.
The next and previous greater elements determine how many subarrays include the current element as the largest.
By finding these efficiently, we can compute the sum of subarray ranges without iterating over all subarrays explicitly, which would be computationally expensive.

Approach
Helper Functions:

Define functions to find the Next Smaller Element (NSE), Previous Smaller Element (PSEE), Next Greater Element (NGE), and Previous Greater Element (PGEE) indices using monotonic stacks.
Use monotonic stacks to efficiently compute these indices in (O(n)) for each helper function.
Calculate Subarray Minimums:

Using the results from NSE and PSEE, compute how many subarrays include the current element as the minimum.
Multiply the count of such subarrays by the value of the current element to compute its contribution.
Calculate Subarray Maximums:

Similarly, using the results from NGE and PGEE, compute how many subarrays include the current element as the maximum.
Multiply the count of such subarrays by the value of the current element to compute its contribution.
Combine Results:

The difference between the sum of subarray maximums and the sum of subarray minimums gives the required result.
Complexity
Time Complexity:
Each helper function (findNextSmaller, findPrevSmaller, findNextGreater, findPrevGreater) runs in (O(n)) due to the monotonic stack.
Calculating the contributions in sumSubarrayMins and sumSubarrayMax is (O(n)).
Overall, the time complexity is: O(n)
Space Complexity:
We use (O(n)) space for stacks and (O(n)) space for the result arrays in the helper functions.
Overall, the space complexity is: O(n)

class Solution {
public:
    // Find Next Smaller Element (NSE) indices
    vector<int> findNextSmaller(vector<int>& arr) {
        int n = arr.size();
        vector<int> nse(n);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            nse[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return nse;
    }

    // Find Previous Smaller or Equal Element (PSEE) indices
    vector<int> findPrevSmaller(vector<int>& arr) {
        int n = arr.size();
        vector<int> psee(n);
        stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            psee[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return psee;
    }

    // Find Next Greater Element (NGE) indices
    vector<int> findNextGreater(vector<int>& arr) {
        int n = arr.size();
        vector<int> nge(n);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }
            nge[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return nge;
    }

    // Find Previous Greater or Equal Element (PGEE) indices
    vector<int> findPrevGreater(vector<int>& arr) {
        int n = arr.size();
        vector<int> pgee(n);
        stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] < arr[i]) {
                st.pop();
            }
            pgee[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return pgee;
    }

    // Calculate sum of subarray minimums
    long long sumSubarrayMins(vector<int>& arr) {
        vector<int> nextSmaller = findNextSmaller(arr);
        vector<int> prevSmaller = findPrevSmaller(arr);

        long long total = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            long long left = i - prevSmaller[i];
            long long right = nextSmaller[i] - i;
            total += (right * left * arr[i]);
        }
        return total;
    }

    // Calculate sum of subarray maximums
    long long sumSubarrayMax(vector<int>& arr) {
        vector<int> nextGreater = findNextGreater(arr);
        vector<int> prevGreater = findPrevGreater(arr);

        long long total = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            long long left = i - prevGreater[i];
            long long right = nextGreater[i] - i;
            total += (right * left * arr[i]);
        }
        return total;
    }

    // Calculate the sum of subarray ranges
    long long subArrayRanges(vector<int>& nums) {
        return sumSubarrayMax(nums) - sumSubarrayMins(nums);
    }
};
*/