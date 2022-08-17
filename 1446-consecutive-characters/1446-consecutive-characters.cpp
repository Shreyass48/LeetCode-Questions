class Solution {
public:
    int maxPower(string s) 
    {
        int iCnt = 1, max = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == s[i+1])
                iCnt++;
            else
                iCnt = 1;
            
            if(max < iCnt)
                max = iCnt;
        }
        
        return max;
    }
};