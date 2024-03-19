/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.

Example:
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
*/
class Solution {
public:
    bool isPalindrome(string s) {
        string string1="";
        for(int i=0;i<s.size();i++)
        {
            if(!ispunct(s[i]) && s[i]!=' ')
            {
                s[i]=tolower(s[i]);
                string1+=s[i];
            }
        }
        string rev="";
        for(int i=string1.size()-1;i>=0;i--)
        {
            rev+=string1[i];
        }
        for(int i=0;i<rev.size();i++)
        {
            if(rev[i]!=string1[i])
            {
                return false;
            }
        }
        
        return true;
    }
};
