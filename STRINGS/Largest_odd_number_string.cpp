/*

    Time Complexity : O(N), Where N is the size of the string(num). Here loop creates the time complexity.

    Space complexity : O(1), Constant space.

    Solved using string + math + greedy.




class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        for(int i=n-1; i>=0; i--){
            if((num[i]-'0')%2 !=0) return num.substr(0, i+1);
        }
        return "";
    }
};

*/