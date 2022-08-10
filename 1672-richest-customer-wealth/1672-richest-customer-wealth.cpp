class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) 
    {
        int wealthMax = 0;
        int wealth = 0;
        for(int i = 0; i < acc.size(); i++)
        {
            wealth = 0;
            for(int j = 0; j < acc[i].size(); j++)
            {
                wealth = wealth + acc[i][j];
            }
            if(wealth > wealthMax)
                    wealthMax = wealth;
        }
        
        return wealthMax;
    }
};