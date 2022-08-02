// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    int count(vector<vector<int>> &matrix, int &mid)
    {
        int n = matrix.size(), cnt = 0;
        for (int i = 0; i < n; i++)
            cnt += lower_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
        return cnt;
    }

public:
    int kthSmallest(vector<vector<int>> &matrix, int k)
    {
        int n = matrix.size();
        int lo = matrix[0][0], hi = matrix[n - 1][n - 1], mid, ans = lo;

        while (lo <= hi)
        {
            mid = lo + ((hi - lo) / 2);
            if (count(matrix, mid) < k)
            {
                ans = mid;
                lo = mid + 1;
            }
            else
                hi = mid - 1;
        }

        return ans;
    }
};