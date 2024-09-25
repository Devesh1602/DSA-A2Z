/*Create a function that takes the arguments, final answer array, current subset array, input array, and a variable “index” which points to the current element in the nums array.
Base condition: If the “index” is equal to the size of the nums array then add our current subset array to the final answer because now we cannot traverse the nums array anymore.
We have two choices now
Skip the current element and call the recursive function with index+1 and all other arguments will remain the same.
Add the current element to the current subset and call the recursive function with index +1 and other arguments. After calling the recursive function, do the backtracking step by removing the last element from the current subset.
Print the final answer.*/

#include<iostream>
#include<vector>
using namespace std;
void subsets(vector<vector<int> > &ans, vector<int> &temp, int nums[], int i, int n)
{
    if (i == n)
    {
        ans.push_back(temp);
        return;
    }
    subsets(ans, temp, nums, i + 1, n);
    temp.push_back(nums[i]);
    subsets(ans, temp, nums, i + 1, n);
    temp.pop_back();
    return;
}
int main()
{
    int nums[]= {1, 2, 3};
    vector<vector<int> > ans;
    vector<int> temp;
    subsets(ans, temp, nums, 0, 3);
    for (auto x : ans)
    {
        if(x.size()>0)
        cout<<"[";
        for (auto y : x)
        {
            if(y==x[x.size()-1])
            cout << y <<"]";
            else
            cout << y <<", "; 
        }
        cout << endl;
    }
    return 0;
}