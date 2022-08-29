// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    vector<vector<int>> diagonalSort(vector<vector<int>> &mat)
    {
        int n = mat.size(), m = mat[0].size();
        if (n == 1 || m == 1)
            return mat;

        unordered_map<int, vector<int>> vals;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                vals[i - j].push_back(mat[i][j]);

        for (int i = -1 * (m - 1); i < n; i++)
        {
            sort(vals[i].begin(), vals[i].end());
            reverse(vals[i].begin(), vals[i].end());
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                mat[i][j] = vals[i - j].back();
                vals[i - j].pop_back();
            }
        }

        return mat;
    }
};