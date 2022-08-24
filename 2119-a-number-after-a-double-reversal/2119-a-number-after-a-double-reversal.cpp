class Solution {
public:
    int rev(int num)
    {
        int no = num;
        int rev = 0;
        while(no != 0)
        {
            int digit = no % 10;
            rev = (rev * 10) + digit;
            no = no / 10;
        }
        
        return rev;
    }
    bool isSameAfterReversals(int num) 
    {
        int first = rev(num);
        int second = rev(first);
        
        if(second == num)
            return true;
        
        return false;
    }
};