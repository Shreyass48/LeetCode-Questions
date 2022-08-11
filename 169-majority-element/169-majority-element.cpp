class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int min = nums.size()/2;
        int ans = 0;
        
        unordered_map<int,int> mp;
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto it : mp)
        {
            if(it.second > min)
                ans = it.first;
                
        }
        
        return ans;
    }
};