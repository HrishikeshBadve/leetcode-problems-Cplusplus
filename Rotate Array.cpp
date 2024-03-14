/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Example:-
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        while(k>nums.size())
        {
            k=k-nums.size();
        }
        int i=0;
        vector<int> res;
        for(i= nums.size()-k ; i<nums.size(); i++)
        {
            res.push_back(nums[i]);
        }
        for(int j=0;j<(nums.size()-k); j++)
        {
            res.push_back(nums[j]);
        }
        
        for(int l=0;l<nums.size();l++)
        {
            nums[l]=res[l];
        }
    }
};
