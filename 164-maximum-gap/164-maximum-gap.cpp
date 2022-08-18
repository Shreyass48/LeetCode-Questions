class Solution {
public:
    int maximumGap(vector<int>& nums) 
    {
        if(nums.size() < 2)
            return 0;
        
        sort(nums.begin(), nums.end());
        
        int max = 0, ans = 0;
        for(int i = 0; i < nums.size()-1;i++)
        {
            ans = nums[i+1] - nums[i];
            
            if(ans > max)
                max = ans;
        }
        
        return max;
        
    }
};