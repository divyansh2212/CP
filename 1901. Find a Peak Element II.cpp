// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int bs(vector<vector<int>> &mat, int i, int lo, int hi)
    {
        if (hi < lo)
            return -1;
        int mid = lo + (hi - lo) / 2;

        if (mat[i][mid] > mat[i][mid - 1] && mat[i][mid] > mat[i][mid + 1])
            return mid;

        int f = -1;
        f = bs(mat, i, lo, mid - 1);
        f = max(f, bs(mat, i, mid + 1, hi));
        return f;
    }

    vector<int> findPeakGrid(vector<vector<int>> &mat)
    {
        vector<int> ans(2, 0);
        int n = mat.size(), m = mat[0].size();

        // Checking for corner points
        if (mat[0][0] > mat[0][1] && mat[0][0] > mat[1][0])
            return ans;
        if (mat[0][m - 1] > mat[0][m - 2] && mat[0][m - 1] > mat[1][m - 1])
            return {0, m - 1};
        if (mat[n - 1][0] > mat[n - 1][1] && mat[n - 1][0] > mat[n - 2][0])
            return {n - 1, 0};
        if (mat[n - 1][m - 1] > mat[n - 1][m - 2] && mat[n - 1][m - 1] > mat[n - 2][m - 1])
            return {n - 1, m - 1};

        for (int i = 0; i < n; i++)
        {
            int j = bs(mat, i, 1, m - 2);
            if (j == -1)
                continue;

            // Checking for first row
            if (i == 0)
            {
                if (mat[i][j] > mat[i + 1][j])
                    return {i, j};
            }

            // Checking for last row
            else if (i == n - 1)
            {
                if (mat[i][j] > mat[i - 1][j])
                    return {i, j};
            }

            // Checking for middle rows
            else
            {
                if (mat[i][j] > mat[i + 1][j] && mat[i][j] > mat[i - 1][j])
                    return {i, j};
            }
        }
        // Dummy return value
        return ans;
    }
};