class Solution {
public:
    bool checkZeroOnes(string s) 
    {
        
        int cnt = 0, max = 0;
        int cntt = 0, maxx = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '1')
            {
                cnt++;
                cntt = 0;
            }   
            else
            {
                cntt++;
                cnt = 0;
            }
            if(max < cnt)
                max = cnt;
            if(maxx < cntt)
                maxx = cntt;
        }
        
       
        return max > maxx;
        
    }
};