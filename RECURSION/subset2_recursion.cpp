/*
Sort the input array.
Make a recursive function that takes the input array ,the current subset,the current index and  a list of list/ vector of vectors to contain the answer.
Try to make a subset of size n during the nth recursion call and consider elements from every index while generating the combinations. 
Only pick up elements that are appearing for the first time during a recursion call to avoid duplicates.
Once an element is picked up, move to the next index.The recursion will terminate when the end of array is reached.
While returning backtrack by removing the last element that was inserted.
*/
#include <iostream>
#include <vector>
using namespace std;
void printAns(vector < vector < int > > & ans) {
   cout<<"The unique subsets are "<<endl;
   cout << "[ ";
   for (int i = 0; i < ans.size(); i++) {
      cout << "[ ";
      for (int j = 0; j < ans[i].size(); j++)
         cout << ans[i][j] << " ";
      cout << "]";
   }
   cout << " ]";
}
class Solution {
   private:
      void findSubsets(int ind, int nums[], vector < int > & ds, vector < vector < int > > & ans, int n) {
         ans.push_back(ds);
         for (int i = ind; i < n; i++) {
            if (i != ind && nums[i] == nums[i - 1]) continue;
            ds.push_back(nums[i]);
            findSubsets(i + 1, nums, ds, ans, n);
            ds.pop_back();
         }
      }
   public:
      vector < vector < int > > subsetsWithDup(int nums[],int n) {
         vector < vector < int > > ans;
         vector < int > ds;
         sort(nums,nums+n);
         findSubsets(0, nums, ds, ans, n);
         return ans;
      }
};
int main() {
   Solution obj;
   int nums[] = {1,2,2};
   int n=3;
   vector < vector < int > > ans = obj.subsetsWithDup(nums,n);
   printAns(ans);
   return 0;
}