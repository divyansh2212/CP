// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temp)
    {
        int n = temp.size();
        vector<int> g[101];
        for (int i = 0; i < n; i++)
            g[temp[i]].push_back(i);

        vector<int> ans(n);
        ans[n - 1] = 0;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = temp[i] + 1; j < 101; j++)
            {
                if (g[j].size() > 0)
                {
                    int lo = 0, hi = g[j].size() - 1, mid;
                    while (lo <= hi)
                    {
                        mid = lo + (hi - lo) / 2;
                        if (g[j][mid] > i)
                            hi = mid - 1;
                        else
                            lo = mid + 1;
                    }
                    if (g[j][hi] > i && g[j][hi] < n)
                    {
                        if (temp[g[j][hi]] > temp[i])
                        {
                            if (ans[i] != 0)
                                ans[i] = min(ans[i], g[j][hi] - i);
                            else
                                ans[i] = g[j][hi] - i;
                        }
                    }
                    else if (g[j][lo] > i && g[j][lo] < n)
                    {
                        if (temp[g[j][lo]] > temp[i])
                        {
                            if (ans[i] != 0)
                                ans[i] = min(ans[i], g[j][lo] - i);
                            else
                                ans[i] = g[j][lo] - i;
                        }
                    }
                }
            }
        }
        return ans;
    }
};