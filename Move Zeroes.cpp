/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.

Example:-
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                for(int j=i+1;j<nums.size();j++)
                {
                    if(nums[j]!=0)
                    {
                        int temp = nums[i];
                        nums[i]=nums[j];
                        nums[j]=temp;
                        break;
                    }
                }
            }
        }
    }
};
