// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{

public:
    int maxSideLength(vector<vector<int>> &mat, int threshold)
    {
        int n = mat.size(), m = mat[0].size(), lo = 1, hi = min(n, m), ans = 0, mid;

        vector<vector<int>> prefix(n + 1, vector<int>(m + 1, 0));
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] + mat[i - 1][j - 1] - prefix[i - 1][j - 1];

        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;

            bool flag = false;
            for (int i = 0; i <= n - mid && !flag; i++)
            {
                for (int j = 0; j <= m - mid && !flag; j++)
                {
                    int sum = prefix[i + mid][j + mid] - prefix[i + mid][j] - prefix[i][j + mid] + prefix[i][j];
                    if (sum <= threshold)
                        flag = true;
                }
            }

            if (flag)
                ans = mid, lo = mid + 1;
            else
                hi = mid - 1;
        }

        return ans;
    }
};