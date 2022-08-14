class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) 
    {
        // Vectors for partition
        vector<int> left;
        vector<int> right;
        vector<int> mid;
        vector<int> ans;
        
        // pushing all propr values in propr vector 
        for(int i = 0; i < nums.size(); i++)
        {
           if(nums[i] < pivot)
           {
               left.push_back(nums[i]);
           }
           else if(nums[i] > pivot)
           {
               right.push_back(nums[i]);
           }
            else
            {
                mid.push_back(nums[i]);
            }
        }
        
        // making final vector to return
        for(int i = 0; i < left.size();i++)
        {
            ans.push_back(left[i]);
        }
                
        for(int i = 0; i < mid.size();i++)
        {
            ans.push_back(mid[i]);
        }        
        
        for(int i = 0; i < right.size();i++)
        {
            ans.push_back(right[i]);
        }
        
        
        return ans;
    }
};