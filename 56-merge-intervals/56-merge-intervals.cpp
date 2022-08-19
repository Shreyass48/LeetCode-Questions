class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        // set strt ans end, start as first ele and end as last ele in row
        int strt = intervals[0][0];
        int end = intervals[0][1];
        
        for(int i = 1; i < intervals.size(); i++)
        {
            // compairing values
            //intervals[i][0] is current value
            // strt and end is prev values
            if(intervals[i][0] <= end)
            {
                strt = min(intervals[i][0],strt);
                end = max(intervals[i][1],end);
            }
            else
            {
                ans.push_back({strt,end});
                strt = intervals[i][0];
                end  = intervals[i][1];
            }
        }
        
        // for last record, last strt end
        ans.push_back({strt,end});
        
        return ans;
        // vector<vector<int>> v;
        // sort(intervals.begin(), intervals.end());
        // int n = intervals.size(), x = intervals[0][0], y = intervals[0][1];
        // for(int i = 1 ; i<n ; i++)
        // {
        //     if(intervals[i][0]>=x && intervals[i][0]<=y)
        //     {
        //         x = min(intervals[i][0], x);
        //         y = max(intervals[i][1], y);
        //     }
        //     else
        //     {
        //         v.push_back({x,y});
        //         x = intervals[i][0];
        //         y = intervals[i][1];
        //     }
        // }
        // v.push_back({x,y});
        // return v;

    }
};