// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

class Solution
{
public:
    void func(vector<vector<int>> &allRows, int idx)
    {
        if (idx == allRows.size())
            return;
        int n = idx;
        allRows[idx][0] = 1, allRows[idx][idx] = 1;
        for (int i = 1; i < idx; i++)
            allRows[idx][i] = allRows[idx - 1][i] + allRows[idx - 1][i - 1];

        func(allRows, idx + 1);
    }

    vector<int> getRow(int rowIndex)
    {
        vector<vector<int>> allRows(rowIndex + 1, vector<int>(rowIndex + 1, -1));
        func(allRows, 0);

        return allRows[rowIndex];
    }
};