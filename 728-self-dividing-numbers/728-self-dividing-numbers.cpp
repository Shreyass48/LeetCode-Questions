class Solution {
public:
    bool isDividing(int no)
    {
        int num = no;
        while(num != 0)
        {
            int ld = num % 10;
            if(ld == 0 || no % ld != 0)
                return false;
            num = num / 10;
            
        }
        
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> ans;
        for(int i = left; i <= right; i++)
        {
            if(isDividing(i) == true)
                ans.push_back(i);
        }
        
        return ans;
    }
};