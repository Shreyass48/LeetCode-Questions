class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) 
    {
        int oddIndx = 1, evenIndx = 0;
        vector<int> ans(nums.size());
        for(int i = 0; i < nums.size();i++)
        {
            if(nums[i] % 2 == 0)
            {
                ans[evenIndx] = nums[i];
                evenIndx+=2;
            }
            else if(nums[i] % 2 != 0)
            {
                ans[oddIndx] = nums[i];
                oddIndx+=2;
            }
        }
        
        return ans;
    }
};