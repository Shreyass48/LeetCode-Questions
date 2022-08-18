class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int prod = 1, maxprod = INT_MIN;
        int i =0;
        for(i = 0; i < nums.size(); i++)
        {
            prod = prod * nums[i];
            
            maxprod = max(maxprod,prod);
            
            if(nums[i] == 0)
                prod = 1;
        }
        prod = 1;
        for(i = nums.size()-1; i >=0 ; i--)
        {
            prod = prod * nums[i];
            
           maxprod = max(maxprod,prod);
            
            if(nums[i] == 0)
                prod = 1;
        }
        
        return maxprod;  
    }
};