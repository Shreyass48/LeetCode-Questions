/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) 
    {
        int strt = 1;
        int end = n;
        int mid = strt + (end - strt) / 2;
        
        while(strt <= end)
        {
            mid = strt + (end - strt) / 2;
            int ret = guess(mid);
            if(ret == 0)
            {
               return mid;
            }
            if(ret == -1)
            {
                end = mid - 1;
            }
            else{
                strt = mid + 1;
            }
            
        }
        
        return -1;
    }
};