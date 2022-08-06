class Solution {
public:
    double average(vector<int>& salary) 
    {
        sort(salary.begin(),salary.end());
        int ans = 0, j = 0;
        for(int i = 1; i < salary.size() - 1; i++)
        {
            ans = ans + salary[i];
            j++;
        }
        double avg = (double) ans/j;
        
        return avg;
        
        
    }
};