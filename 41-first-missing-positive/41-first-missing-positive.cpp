class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int missPos = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == missPos)
            {
                missPos++;
            }
        }
        
        return missPos;
    }
};