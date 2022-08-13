class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int indx1 = -1, indx2 = -1;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == target)
            {
                indx1 = i;
                break;
            }
        }
        
        for(int i = nums.size()-1; i >=0; i--)
        {
            if(nums[i] == target)
            {
                indx2 = i;
                break;
            }
        }
        
        
        
        return {indx1,indx2};
    }
};