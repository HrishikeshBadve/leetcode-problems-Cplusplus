/*
Given an integer n, return true if it is a power of three. Otherwise, return false.
An integer n is a power of three, if there exists an integer x such that n == 3x.

Example:
Input: n = 27
Output: true
Explanation: 27 = 33
*/
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)
        {
            return false;
        }
        
        if(n==1)
        {
            return true;
        }
        
        for(int i=1;i<=n;i++)
        {
            if(pow(3,i)==n)
            {
                return true;
            }
            if(pow(3,i)>n)
            {
                return false;
            }
        }
        return false;
    }
};
