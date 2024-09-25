/*class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> m; // Create a map to store Roman numeral values
        
        // Initialize the map with Roman numeral characters and their corresponding values
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        
        int ans = 0; // Variable to store the final integer value
        
        // Iterate through the Roman numeral string
        for(int i = 0; i < s.length(); i++){
            // Compare the value of the current character with the next character
            if(m[s[i]] < m[s[i+1]]){
                ans -= m[s[i]]; // Subtract the value if the current numeral is smaller than the next
            }
            else{
                ans += m[s[i]]; // Add the value if the current numeral is greater than or equal to the next
            }
        }
        return ans; // Return the final integer value
    }
};
*/