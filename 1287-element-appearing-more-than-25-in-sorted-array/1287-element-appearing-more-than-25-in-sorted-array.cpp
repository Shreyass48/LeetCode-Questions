class Solution {
public:
    int findSpecialInteger(vector<int>& arr) 
    {
        int per = arr.size() * 0.25;
        int ans = 0;
        
        unordered_map<int,int> mp;
        
        for(int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        
        for(auto it : mp)
        {
            if(it.second > per)
                ans = it.first;
        }
        
        return ans;
    }
};