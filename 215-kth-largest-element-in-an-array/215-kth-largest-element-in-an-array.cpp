class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
       sort(nums.begin(),nums.end());
       // int n = k, ans = 0;
       // for(int i = nums.size()-1; i >=0 ; i--)
       // {
       //     n--;
       //     if(n == 0)
       //     {
       //         ans = nums[i];
       //         break;
       //     }
       // }
        
        return nums[nums.size() - k];
        
    }
};