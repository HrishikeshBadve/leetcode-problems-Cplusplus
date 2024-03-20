/*
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".

Example:
Input: strs = ["flower","flow","flight"]
Output: "fl"
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int length=1;
        string res="";
        for(int i=0;i<strs[0].size();i++)
        {
            int count=0;
            string prefix=strs[0].substr(0,length);
            for(int j=0;j<strs.size();j++)
            {
                string string1 = strs[j];
                if(string1.substr(0,length)==prefix)
                {
                    count++;
                }
            }
            if(count==strs.size())
            {
                length++;
                res=prefix;
            }
        }
        return res;
    }
};
