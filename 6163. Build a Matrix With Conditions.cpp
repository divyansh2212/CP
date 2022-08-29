// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{

public:
    vector<vector<int>> buildMatrix(int k, vector<vector<int>> &rowConditions, vector<vector<int>> &colConditions)
    {
        vector<vector<int>> dummy;
        vector<vector<int>> ans(k, vector<int>(k, 0));
        sort(rowConditions.begin(), rowConditions.end());
        sort(colConditions.begin(), colConditions.end());

        list<int> rowList;
        vector<bool> rowHsh(k + 1, true);

        for (int i = 0; i < rowConditions.size(); i++)
        {
            if (i > 0 && rowConditions[i] == rowConditions[i - 1])
                continue;
            if (rowHsh[rowConditions[i][0]] == false && rowHsh[rowConditions[i][1]] == false)
            {
                rowList.push_back(rowConditions[i][1]);
                rowList.push_front(rowConditions[i][0]);
            }
            else if (rowHsh[rowConditions[i][0]] == false)
                rowList.push_front(rowConditions[i][0]);
            else if (rowHsh[rowConditions[i][1]] == false)
                rowList.push_back(rowConditions[i][1]);
            else
            {
                for (int j = 1; j <= k; j++)
                {
                    if (rowHsh[j] && j == rowConditions[i][0])
                        break;
                    if (rowHsh[j] && j == rowConditions[i][1])
                        return dummy;
                }
            }
        }

        list<int> colList;
        vector<bool> colHsh(k + 1, true);

        for (int i = 0; i < colConditions.size(); i++)
        {
            if (i > 0 && colConditions[i] == colConditions[i - 1])
                continue;
            if (colHsh[colConditions[i][0]] == false && colHsh[colConditions[i][1]] == false)
            {
                colList.push_back(colConditions[i][1]);
                colList.push_front(colConditions[i][0]);
            }
            else if (colHsh[colConditions[i][0]] == false)
                colList.push_front(colConditions[i][0]);
            else if (colHsh[colConditions[i][1]] == false)
                colList.push_back(colConditions[i][1]);
            else
            {
                for (int j = 1; j <= k; j++)
                {
                    if (colHsh[j] && j == colConditions[i][0])
                        break;
                    if (colHsh[j] && j == colConditions[i][1])
                        return dummy;
                }
            }
        }

        return ans;
    }
};