class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        while(len>0)
        {
            if(len!=1)
            {
                if(digits[len-1] != 9)
                {
                    digits[len-1]++;
                    break;
                }
                else
                {
                    digits[len-1]=0;
                    len--;
                }
            }
            else
            {
                if(digits[len-1] != 9)
                {
                    digits[len-1]++;
                    break;
                }
                else
                {
                    digits[len-1]=0;
                    len--;
                    digits.insert(digits.begin(),1);
                }
            }
        }
        
        return digits;
    }
};
