class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        // unordered_map<int,int> mp;
        int ans = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != val)
            {
                //inPlace change
                nums[ans] = nums[i];
                ans++;
            }
                
        }
        return ans;
    }
};