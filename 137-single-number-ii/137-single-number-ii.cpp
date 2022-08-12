class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        unordered_map<int,int> ans;
        int single = -1;
        for(int i = 0; i < nums.size(); i++)
        {
            ans[nums[i]]++;
        }
        
        for(auto it : ans)
        {
            if(it.second == 1)
            {
                single = it.first;
                break;
            }
        }
        
        return single;    
    }
};