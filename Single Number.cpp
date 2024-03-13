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
