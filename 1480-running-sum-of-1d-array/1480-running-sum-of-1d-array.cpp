class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        vector<int>ans;
        
        int n = 1;
        ans.insert(ans.begin(),nums[0]);
        while(n!=nums.size())
        {
            ans.push_back((ans[n-1] + nums[n]));
            n++;
        }
        return ans;
    }
};