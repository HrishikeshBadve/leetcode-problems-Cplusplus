/*
Given two integer arrays nums1 and nums2, return an array of their intersection.
Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

Example:-
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]
*/
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
