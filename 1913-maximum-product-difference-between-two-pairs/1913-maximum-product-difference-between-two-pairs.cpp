class Solution {
public:
    int maxProductDifference(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int n = nums.size()-1;
        int pair1 = nums[n] * nums[n-1];
        int pair2 = nums[0] * nums[1];
        
        return pair1 - pair2;
    }
};