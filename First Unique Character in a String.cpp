/*
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

Example:
Input: s = "leetcode"
Output: 0
*/
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> hashmap;
        for(int i=0;i<s.size();i++)
        {
            hashmap[s[i]]=0;
        }
        for(int i=0;i<s.size();i++)
        {
            hashmap[s[i]]+=1;
        }
        for(int i=0;i<s.size();i++)
        {
            if(hashmap[s[i]]==1)
            {
                return i;
            }
        }
        return -1;
    }
};
