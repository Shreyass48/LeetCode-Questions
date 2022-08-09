class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> ans;
        for(int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if(ch == '{' || ch =='[' || ch == '(') //for opening
            {
                ans.push(ch);
            }
            else //for closing
            {
                if(ans.empty())
                    return false;
                
                if(ch == '}' && ans.top() != '{')
                    return false;
                
                if(ch == ']' && ans.top() != '[')
                    return false;
                
                if(ch == ')' && ans.top() != '(')
                    return false;
                
                ans.pop();
                
            }
        }
        
        return ans.empty();
    }
};