// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    bool checkXMatrix(vector<vector<int>> &grid)
    {
        bool flag = true;
        int n = grid.size();

        int i = 0, j = 0;
        while (i < n)
        {
            if (grid[i][j] == 0)
                return false;
            i++, j++;
        }

        i = 0, j = n - 1;
        while (i < n)
        {
            if (grid[i][j] == 0)
                return false;
            i++, j--;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    continue;
                if (i + j == n - 1)
                    continue;
                if (grid[i][j] != 0)
                    return false;
            }
        }

        return true;
    }
};