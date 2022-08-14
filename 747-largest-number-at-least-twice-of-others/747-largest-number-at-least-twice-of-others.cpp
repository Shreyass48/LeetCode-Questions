class Solution {
public:
    int dominantIndex(vector<int>& nums) 
    {
        
        int n = nums.size()-1, cnt = 0, max = 0, maxindx = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(max < nums[i])
            {
                max = nums[i];
                maxindx = i;
            }
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[maxindx] >= nums[i]*2)
            {
                cnt++;
            }
        }
        
        if(cnt == n)
        {
            return maxindx;
        }
        
        return -1; 
    }
};