// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n)
    {
        int strt = 0;
        int end = n;
        int mid = strt + (end - strt) / 2;
        int ans = 0;
        while(strt <= end)
        {
            mid = strt + (end - strt) / 2;
            if(isBadVersion(mid))
            {
                ans = mid;
            // ans find so cheak for left side i.e. for another smaller bad ver.
                end = mid - 1;
            }
            else
            {
                strt = mid + 1;
            }
        }
        
        return ans;
        
    }
};