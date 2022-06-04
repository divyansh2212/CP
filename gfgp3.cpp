// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> setMatrix(int n, int m, int q, vector<vector<int>> vec)
    {
        vector<vector<int>> ans(n, vector<int>(m, 0));

        while (q--)
        {
            int x1 = vec[q][0], y1 = vec[q][1], x2 = vec[q][2], y2 = vec[q][3];
            // for (int i = x1 - 1; i < x2; i++)
            //     for (int j = y1 - 1; j < y2; j++)
            //         ans[i][j]++;
        }

        return ans;
    }
};
