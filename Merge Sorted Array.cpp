/*
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
Merge nums1 and nums2 into a single array sorted in non-decreasing order.
The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, 
and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

Example:
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        int k=0;
        vector<int> nums3;
        
        for(int x=0;x<m;x++)
        {
            nums3.push_back(nums1[x]);
        }
        
        while(i<m && j<n)
        {
            if(nums3[i]<=nums2[j])
            {
                nums1[k]=nums3[i];
                i++;
            }
            else
            {
                nums1[k]=nums2[j];
                j++;
            }
            k++;
        }
        while(i<m)
        {
            nums1[k]=nums3[i];
            i++;
            k++;
        }

        while(j<n)
        {
            nums1[k]=nums2[j];
            j++;
            k++;
        }
    }
};
