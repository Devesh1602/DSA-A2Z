/*
class Solution {
public:
    int myAtoi(string s) {
        // Initialize variables
        int result = 0; // To store the final integer
        int sign = 1;   // To handle positive or negative sign
        bool digitsStarted = false; // Flag to check if digits have started

        // Iterate through the string
        for (char c : s) {
            // If a space is encountered before any digits, continue to the next character
            if (!digitsStarted && c == ' ') {
                continue;
            }

            // Check for the sign of the number
            if (!digitsStarted && (c == '+' || c == '-')) {
                sign = (c == '-') ? -1 : 1;
                digitsStarted = true; // Digits have started
                continue;
            }

            // Check if the character is a digit
            if (isdigit(c)) {
                digitsStarted = true; // Digits have started
                int digit = c - '0';

                // Check for integer overflow
                if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7)) {
                    return (sign == 1) ? INT_MAX : INT_MIN;
                }

                // Accumulate the digit
                result = result * 10 + digit;
            } else {
                // If a non-digit character is encountered after digits have started, break the loop
                break;
            }
        }

        // Apply the sign to the result
        return result * sign;
    }
};
*/