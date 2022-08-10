class Solution {
public:
    int maxProfit(vector<int>& p) 
    {
        int cPrice = p[0];
        int Profit = 0;
        
        for(int i = 0; i < p.size();i++)
        {
            if(cPrice > p[i])
            {
                cPrice = p[i];
            }
            
            int cProfit = p[i]-cPrice;
            if(cProfit > Profit)
            {
                Profit = cProfit;
            }
        }
        
        return Profit;
    }
};