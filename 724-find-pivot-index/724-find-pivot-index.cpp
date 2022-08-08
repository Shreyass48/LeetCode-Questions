class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int ans = -1;
        int totalSum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            totalSum = totalSum + nums[i];
        }
        
        int rightSum = totalSum;
        int leftSum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            leftSum = leftSum + nums[i];
            if(leftSum == rightSum)
            {
                ans = i;
                break;
            }
            rightSum = rightSum - nums[i];
            

                   
        }  
        
        return ans;
        
    }
};