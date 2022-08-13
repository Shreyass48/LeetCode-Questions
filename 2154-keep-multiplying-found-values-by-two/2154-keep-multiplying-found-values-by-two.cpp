class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) 
    {
        int mul = original;
        set<int> ans;
        for(auto i : nums)
        {
            ans.insert(i);
        }
        
        for(auto i : nums)
        {
            if(ans.count(mul))
            {
                mul = mul * 2;
            }
        }
        
        return mul;
    }
};