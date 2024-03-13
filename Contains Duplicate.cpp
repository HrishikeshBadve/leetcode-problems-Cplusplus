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
