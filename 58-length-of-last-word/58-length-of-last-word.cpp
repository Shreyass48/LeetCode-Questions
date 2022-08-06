class Solution {
public:
    int lengthOfLastWord(string s) 
    {
         int n = s.length() - 1;
        int len = 0;
        
        int i = n;
        while(s[i] == ' ')
        {
            i--;
        }
        for(int j = i; j >= 0; j--)
        {
            if(s[j] != ' ')
                len++;
            else
                break;
        }
        return len;
    }
};