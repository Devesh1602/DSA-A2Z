/*
class Solution {
public:
    int beautySum(string s) {
        int ans = 0;       // Initialize the variable to store the beauty sum
        int n = s.size();  // Get the length of the input string 's'

        // Loop through all possible starting positions of the substring
        for (int i = 0; i < n; i++) {
            int cnt[26] = {}; // Initialize an array to count the frequency of each lowercase letter
            int max_f = 0;    // Initialize the maximum frequency to 0
            int min_f = INT_MAX; // Initialize the minimum frequency to the maximum possible value

            // Loop through all possible ending positions of the substring
            for (int j = i; j < n; j++) {
                int ind = s[j] - 'a'; // Calculate the index of the current lowercase letter
                cnt[ind]++; // Increment the frequency count for the current letter
                max_f = max(max_f, cnt[ind]); // Update the maximum frequency

                min_f = INT_MAX; // Reset the minimum frequency to the maximum possible value

                // Loop through all lowercase letters (a to z)
                for (int k = 0; k < 26; k++) {
                    if (cnt[k] > 0) // Check if the letter exists in the substring
                        min_f = min(min_f, cnt[k]); // Update the minimum frequency
                }

                // Calculate the beauty of the current substring and add it to the answer
                ans += (max_f - min_f);
            }
        }
        return ans; // Return the final beauty sum
    }
};
*/