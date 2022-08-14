class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        int n = s.length();
        char ans;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i = 0 ; i < n+1; i++)
        {
            if(s[i] != t[i])
            {
                ans = t[i];
                break;
            }
        }
        
        return ans;
    }
};