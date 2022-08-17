class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
       int Mindx = m;
        int Nindx = n;
       for(int i = 0; i < n; i++)
       {
           nums1[Mindx] = nums2[i];
           Mindx++;
       }
      sort(nums1.begin(),nums1.end());
    }
};