/*#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        //approach is to apply next greater element method for nums2 and store the next greater element for each nums2[i] in a map(nge) first as element and second as its nge.
        int n=nums2.size();
        unordered_map<int, int> nge(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--)
        {
            int it=nums2[i];
            while(!st.empty()&&st.top()<=nums2[i])
            {
                st.pop();
            }
            if(st.empty()){nge[it]=-1;}
            else{nge[it]=st.top();}
            st.push(nums2[i]);
        }
        //now traverse nums1 and find nums1[i] in map and push its cooresponsding nge into a new answer vector and return it.


        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            ans.push_back(nge[nums1[i]]);
        }
        return ans;
    }
};*/