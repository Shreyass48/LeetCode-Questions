class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {

        int min = nums.size()/3;
        vector<int> ans;
        
        unordered_map<int,int> mp;
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto it : mp)
        {
            if(it.second > min)
                ans.push_back(it.first);
                
        }
        
        return ans;
        
    }
};