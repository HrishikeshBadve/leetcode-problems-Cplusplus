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
