class Solution {
public:
    string removeDuplicates(string str) 
    {
        string ans = "";
        stack<char> stk;
        
        for(int i = 0; i < str.length();i++)
        {
            if(stk.empty())
            {
                stk.push(str[i]);
            }
            else
            {
                if(str[i] == stk.top())
                {
                    stk.pop();
                }
                else
                {
                    stk.push(str[i]);
                }
            }
        }
        
        while(!stk.empty())
        {
             ans.push_back(stk.top());
             stk.pop();
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
        
        
    }
};