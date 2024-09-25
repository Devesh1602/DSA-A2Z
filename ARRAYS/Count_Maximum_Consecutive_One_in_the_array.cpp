#include <iostream>
using namespace std;
int findMaxConsecutiveOnes(int nums[], int n)
{
    int cnt = 0;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }

        maxi = max(maxi, cnt);
    }
    return maxi;
}

int main()
{
    int nums[] = {1, 1, 0, 1, 1, 1};
    int n = 6;
    cout << "The maximum  consecutive 1's are " << findMaxConsecutiveOnes(nums, n) << endl;
    return 0;
}