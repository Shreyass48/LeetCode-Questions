class Solution {
public:
    int findLucky(vector<int>& arr) 
    {
        int ret = -1;
        unordered_map<int,int> ans;
        for(int i = 0; i < arr.size(); i++)
        {
            ans[arr[i]]++;
        }
        
        for(auto it : ans)
        {
            if(it.first == it.second)
                ret = max(it.second,ret);
        }
        
        return ret;
    }
};