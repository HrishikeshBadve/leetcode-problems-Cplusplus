/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Example:
Input: s = "anagram", t = "nagaram"
Output: true
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        {
            return false;
        }
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=t[i])
            {
                return false;
            }
        }
        return true;
    }
};
