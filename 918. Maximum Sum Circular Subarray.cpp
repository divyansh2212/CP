// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int maxSubarraySumCircular(vector<int> &arr)
    {
        int n = arr.size();

        int ans = INT_MIN;

        int i = 0, curr = 0;
        while (i < n)
        {
            curr += arr[i];
            if(curr < 0)
            curr = 0;

            ans = max(ans, INT_M)

            
        }
        

        // for (int i = 0; i < n; i++)
        // {
        //     int curr = arr[i];
        //     ans = max(ans, curr);
        //     for (int j = i + 1; j < n; j++)
        //     {
        //         curr += arr[j];
        //         ans = max(ans, curr);
        //     }

        //     for (int j = 0; j < i; j++)
        //     {
        //         curr += arr[j];
        //         ans = max(ans, curr);
        //     }
        // }

        return ans;
    }
};