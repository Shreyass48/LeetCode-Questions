class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        unordered_map<int,int> ans;
        int dup = -1;
        for(int i = 0; i < nums.size(); i++)
        {
            ans[nums[i]]++;
        }
        
        for(auto it : ans)
        {
            if(it.second >= 2)
            {
                dup = it.first;
                break;
            }
        }
        
        return dup;
        // Iterative Approch
        // sort(nums.begin(),nums.end());
        // int dup = -1;
        // for(int i = 0; i < nums.size() -1;i++)
        // {
        //     if(nums[i] == nums[i+1])
        //     {
        //         dup = nums[i];
        //         break;
        //     }
        // }
        // return dup;
    }
};