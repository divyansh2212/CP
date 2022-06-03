// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class NumMatrix
{
public:
    vector<vector<int>> prefixSum1;

    NumMatrix(vector<vector<int>> &matrix)
    {
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> prefixSum(n + 1, vector<int>(m + 1, 0));
       
        for (int i = 1; i <= n; i++)
            prefixSum[i][1] = prefixSum[i - 1][1] + matrix[i - 1][0];

        for (int j = 1; j <= m; j++)
            prefixSum[0][j] = prefixSum[1][j - 1] + matrix[0][j - 1];

        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                prefixSum[i][j] = matrix[i - 1][j - 1] + prefixSum[i - 1][j] + prefixSum[i][j - 1] - prefixSum[i - 1][j - 1];

        prefixSum1 = prefixSum;
    }

    int sumRegion(int row1, int col1, int row2, int col2)
    {
        row1++, row2++, col1++, col2++;
        return prefixSum1[row2][col2] - prefixSum1[row1 - 1][col2] - prefixSum1[row2][col1 - 1] + prefixSum1[row1 - 1][col1 - 1];
    }
};