class Solution {
public:
    bool checkRecord(string s) 
    {
      
        int ab = 2;
        int cnt = 0;
        for(int i = 0; i < s.length(); i++)
        {
            
            
            if(s[i] == 'A')
            {
                cnt++;
            }
            else
            {
                if(s[i] == 'L' && s[i+1] == 'L' && s[i+2] == 'L')
                    return false;
            }
        }
        
        if(cnt >= ab)
        {
            return false;
        }
        else{
            return true;
        }
            
        
    }
};