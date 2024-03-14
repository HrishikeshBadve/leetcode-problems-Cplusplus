/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.

Example:-
Input: nums = [2,2,1]
Output: 1
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> hashmap;
        for(int i =0;i<nums.size();i++)
        {
            hashmap[nums[i]]++;
        }
        for(auto it=hashmap.begin();it!=hashmap.end();it++)
        {
            if(it -> second == 1)
            {
                return(it -> first);
            }
        }
        
        return -1;

    }
};
