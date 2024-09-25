class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)
        {
            return true;
        }
        if(n<=0 || n%2!=0)
        {
            return false;
        }
        return isPowerOfTwo(n/2);
    }
};
/*
Keep dividing the number by ‘2’ until it is not divisible by ‘2’ anymore.
If the number is equal to ‘1’:
The integer is a power of two
Else
The integer is not a power of two
*/