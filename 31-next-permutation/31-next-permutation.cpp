class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    { 
       // InBuilt Method
       // next_permutation(nums.begin(),nums.end());
        
        int n = nums.size();
        int indx = -1;
        for(int i = n - 1; i > 0; i--)
        {
            if(nums[i] > nums[i-1])
            {
                indx = i;
                break;
            }
        }
        
        if(indx == -1)
        {
            reverse(nums.begin(),nums.end());
        }
        else
        {
            int prev = indx;
            for(int i = indx+1; i < n; i++)
            {
                if(nums[i] > nums[indx - 1] && nums[i] <= nums[prev])
                {
                    prev = i;
                }
            }
            
            swap(nums[indx - 1],nums[prev]);
            reverse(nums.begin()+indx,nums.end());
            
        }
    }
};