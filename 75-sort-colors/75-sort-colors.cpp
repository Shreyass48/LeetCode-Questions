#include<algorithm>
class Solution {
public:
    void sortColors(vector<int>& arr) 
    {
        // sort(nums.begin(),nums.end());
        
   int strt = 0;
   int end = arr.size()-1;
   int mid = 0;
    
   while(mid <= end)
   {
       if(arr[mid] == 0)
       {
           swap(arr[strt],arr[mid]);
           strt++;
           mid++;
       }
       else if(arr[mid] == 1)
       {
           mid++;
       }
       else 
       {
           swap(arr[mid],arr[end]);
           end--;
       }
   }
        
        
    }
};