class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int left=1;
        int right=1;
        vector<int>prod;
        
        for(int i=0;i<nums.size();i++)
        {
            prod.push_back(left);
            left=left*nums[i];
        }
        for(int i=nums.size()-1;i>-1;i--)
        {
            prod[i]=right*prod[i];
            right=right*nums[i];
        }
        return prod;
        
// OWN Partial Soln(TLE for extra large array)
//         int indx = -1, prod = 1;
//         vector<int> ans;
//         for(int i = 0; i < nums.size(); i++)
//         {
//             indx = i;
//             for(int j = 0; j < nums.size(); j++)
//             {
//                 if(indx == j)
//                 {
//                     continue;
//                 }
//                 prod = prod * nums[j];
//             }
//             ans.push_back(prod);
//             prod = 1;
            
//         }
        
//         return ans;
    }
};