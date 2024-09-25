/*
Approach:

Let us check one 3-digit Armstrong Number

n=153

sum=0

No. of digits = 3 so we need to cube every digit.

In the First iteration, extract digit 3 from 153 and cube it which becomes 27, add it to sum= 0+27=27 which becomes 27 now

In Second iteration , extract digit 5 from 15 and cube it which becomes 125 , add it to sum = 27 +125 = 152 which becomes 152 now

In Third iteration , extract digit 1 from 1 and cube it which becomes 1 , add it to sum = 152 + 1 = 153 which becomes 153 now.

The original Number was 153 and the sum of cubes = 153. 

*/

#include<iostream>
#include<cmath>
using namespace std;
bool ArmstrongNumber(int n)
{
    int originalno = n;
    int count = 0;
    int temp = n;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    int sumofpower = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sumofpower += pow(digit,count);
        n /= 10;
    }
    return (sumofpower == originalno);
}
int main()
{
    int n1 = 153;
    if (ArmstrongNumber(n1))
    {
        cout << "Yes, it is an Armstrong Number\n";
    }
    else
    {
        cout << "No, it is not an Armstrong Number\n";
    }
    return 0;
}