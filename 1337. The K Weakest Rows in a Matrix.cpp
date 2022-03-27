// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
    {
        int m = mat.size(), n = mat[0].size();

        vector<pair<int, int>> pairs;
        for (int i = 0; i < m; i++)
        {
            int ans = 0;
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j])
                    ans++;
            }
            pairs.push_back({ans, i});
        }

        sort(pairs.begin(), pairs.end());
        vector<int> ans(k);
        for (int i = 0; i < k; i++)
            ans[i] = pairs[i].second;

        return ans;
    }
};