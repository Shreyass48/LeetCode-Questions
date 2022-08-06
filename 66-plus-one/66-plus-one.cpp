class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        
        for(int i = digits.size() - 1; i >= 0; i--)
        {
            if(digits[i] != 9)
            {
                digits[i]++;
                return digits;
            }
            if(digits[i] == 9)
            {
                digits[i] = 0;
            }
        }
        
        if(digits[0] == 0)
        {
            int n = digits.size();
            vector<int> ans(n);
            ans.insert(ans.begin(),1);
            return ans;
        }
        return digits;
    }
};