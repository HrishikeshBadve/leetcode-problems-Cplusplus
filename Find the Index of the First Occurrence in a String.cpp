/*
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Example:
Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
*/
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()>haystack.size())
        {
            return -1;
        }
        
        for(int i=0;i<haystack.size();i++)
        {
            if(haystack[i]==needle[0])
            {
                string temp = haystack.substr(i,needle.size());
                if(temp==needle)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};
