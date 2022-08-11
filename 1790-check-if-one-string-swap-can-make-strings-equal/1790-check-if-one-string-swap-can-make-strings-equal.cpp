class Solution {
public:
    bool areAlmostEqual(string s1, string s2) 
    {   
        if(s1 == s2)    
            return true;
        
        vector<int> indx;
        int diff = 0;
        for(int i = 0; i < s1.length();i++)
        {
            if(s1[i] != s2[i])
            {
                diff++;
                indx.push_back(i); // push indx of diff char
            }
        }
        
        if(diff != 2)
            return false;
        
        swap(s1[indx[0]],s1[indx[1]]);
        if(s1 == s2)
            return true;
        
        
        return false;
        
    }
};