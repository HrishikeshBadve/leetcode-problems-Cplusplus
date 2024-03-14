/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example:-
Input: nums = [1,2,3,1]
Output: true
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> hashmap;
        for(int i=0;i<nums.size();i++)
        {    
            
            if(hashmap.count(nums[i])>0)
            {
                return true;
            }
            hashmap[nums[i]]=1;
        }
        return false;
    }
};
