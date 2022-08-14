class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        int indx = 0;
        for(int i = 0; i < nums.size() ; i++)
        {
            if(nums[i] % 2 == 0)
            {
                swap(nums[indx],nums[i]);
                indx++;
            }
        }
        
        // for(int i : nums)
        // {
        //     cout<<i<<" ";
        // }
        
        return nums;
    }
};