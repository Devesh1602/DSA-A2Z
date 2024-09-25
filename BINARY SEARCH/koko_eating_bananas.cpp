/*class Solution {
public:
    int minEatingSpeed(vector<int>& nums, int h) {
        int low = 1; // Minimum possible eating speed is 1
        int high = *max_element(nums.begin(), nums.end()); // Maximum possible eating speed is the maximum number of bananas in a pile

        while (low < high) {
            int mid = low + (high - low) / 2;
            int hoursNeeded = 0;
            for (int num : nums) {
                hoursNeeded += (num + mid - 1) / mid;
            }

            if (hoursNeeded <= h) {
                high = mid; // This eating speed is feasible, search for smaller eating speeds
            } else {
                low = mid + 1; // This eating speed is not feasible, search for higher eating speeds
            }
        }

        return low;
    }
};
*/