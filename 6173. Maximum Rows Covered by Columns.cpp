// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    void f(vector<bool> &pickedCol, int &ans, int currCol, int leftCols, int &n, int &m, vector<vector<int>> &mat)
    {
        if (leftCols == 0)
        {
            vector<int> currRows(n, true);
            for (int j = 0; j < m; j++)
            {
                if (pickedCol[j])
                    continue;
                for (int i = 0; i < n; i++)
                    if (mat[i][j])
                        currRows[i] = false;
            }
            int cnt = 0;
            for (int i = 0; i < n; i++)
                if (currRows[i])
                    cnt++;
            ans = max(ans, cnt);
            return;
        }
        if (currCol == m)
            return;

        pickedCol[currCol] = true;
        f(pickedCol, ans, currCol + 1, leftCols - 1, n, m, mat);
        pickedCol[currCol] = false;
        f(pickedCol, ans, currCol + 1, leftCols, n, m, mat);
    }

public:
    int maximumRows(vector<vector<int>> &mat, int cols)
    {
        int n = mat.size(), m = mat[0].size();

        int ans = 0;
        vector<bool> pickedCol(m, false);
        f(pickedCol, ans, 0, cols, n, m, mat);

        return ans;
    }
};