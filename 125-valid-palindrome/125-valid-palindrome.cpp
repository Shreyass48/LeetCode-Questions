class Solution {
public:
    bool isPalindrome(string s) 
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        
        vector<char> str;
        
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9')
            {
                str.push_back(s[i]);
            }
    
        }
        
        int strt = 0;
        int end = str.size()-1;
        while(strt <= end)
        {
            if(str[strt] != str[end])
                return false;
            strt++;
            end--;
        }
        
        return true;
        
            
    }
};