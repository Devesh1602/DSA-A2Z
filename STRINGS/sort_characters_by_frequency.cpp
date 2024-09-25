/*
class Solution {
public:
    string frequencySort(string s) {
        // Step 1: Initialize an unordered_map to store character frequencies
        unordered_map<char, int> freq;
        int maxFreq = 0; // Variable to store the maximum frequency
        
        // Step 2: Count character frequencies and find the maximum frequency
        for (char c : s) {
            freq[c]++;
            maxFreq = max(maxFreq, freq[c]);
        }
        
        // Step 3: Initialize a vector of strings (bucket) to hold characters grouped by frequency
        vector<string> bucket(maxFreq + 1, "");
        
        // Step 4: Populate the bucket with characters grouped by their frequency
        for (auto& entry : freq) {
            bucket[entry.second].append(entry.second, entry.first);
        }
        
        // Step 5: Build the final sorted string by appending characters from the bucket
        string ans;
        for (int i = maxFreq; i > 0; i--) {
            if (!bucket[i].empty()) {
                ans += bucket[i];
            }
        }
        
        // Step 6: Return the sorted string
        return ans;
    }
};
*/