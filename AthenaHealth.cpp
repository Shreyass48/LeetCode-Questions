#include <bits/stdc++.h>

using namespace std;

vector<int> Fun(vector<int> arr, int n)
{
    //using loop
    // vector<int> ans;
    // sort(arr.begin(),arr.end());
    
    // for(int i = 0; i < n - 1; i++)
    // {
    //     if(arr[i] == arr[i+1])
    //     {
    //         ans.push_back(arr[i]);
    //         i++;
    //     }
    //     else
    //     {
    //         ans.push_back(arr[i]);
    //     }
    // }
    
    // return ans;
    
    // using map
    map<int,int> ans;
    vector<int> ret;
    for(int i = 0; i < n; i++)
    {
        ans[arr[i]]++;
    }
    
    for(auto i : ans)
    {
        // for distinct
        if(i.second <= 2)
        {
            ret.push_back(i.first);
        }
        // for repeted
        if(i.second >= 2)
        {
            ret.push_back(i.first);
        }
    }
    
    return ret;
}

int main()
{
    vector<int> arr = {3,5,3,4,5};
    vector<int> ret = Fun(arr,5);
    // Fun(arr,5);
    
    for(auto i : ret)
    {
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}
