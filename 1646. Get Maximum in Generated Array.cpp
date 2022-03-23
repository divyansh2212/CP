// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int getMaximumGenerated(int n)
    {
        vector<int> arr(n + 1, 0);
        arr[0] = 0;
        if (n == 0)
            return 0;
        arr[1] = 1;

        for (int i = 2; i < n + 1; i++)
        {
            if (i % 2 == 0)
                arr[i] = arr[i / 2];
            else
                arr[i] = arr[i / 2] + arr[(i / 2) + 1];
        }
        int ans = *max_element(arr.begin(), arr.end());
        return ans;
    }
};