class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for(auto in = nums1.begin();in!=nums1.end();in++)
        {
            for(auto jn = nums2.begin();jn!=nums2.end();jn++)
            {
                if(*in == *jn)
                {
                    res.push_back(*in);
                    nums2.erase(jn);
                    break;
                }
            }
        }
        return(res);
    }
};
