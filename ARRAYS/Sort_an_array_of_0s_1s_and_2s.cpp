#include<iostream>
#include<vector>
using namespace std;
void sortColors(vector<int> &nums)
{
    int low = 0, mid = 0, high = nums.size() - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
            mid++;

        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}
// Dutch National Flag Algorithm
/*
1. array[0 to low-1] = 0 is present
2. array[low to mid-1] = 1 is present
3. array[mid to high-1] = unknown
4. array[high to n(size of array)] = 2 is present
*/