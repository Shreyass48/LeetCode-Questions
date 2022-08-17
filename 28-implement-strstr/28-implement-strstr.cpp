class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int i = 0, flag = 0;
        for(i = 0 ; i < haystack.length(); i++)
        {
            if(haystack[i] == needle[0])
            {
                flag = 0;
                for(int j = 0; j < needle.length();j++)
                {
                    if(haystack[i+j] != needle[j])
                    {
                        flag = 1;
                        break;
                    }
                }
                 if(flag == 0)
                    return i;
            }
        }
        
        return -1;
    }
};