// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    void f(vector<int> &arr)
    {
        vector<int> c = arr;

        arr[0] = arr[arr.size() - 1];

        for (int i = 1; i < arr.size(); i++)
            arr[i] = c[i - 1];
    }

    vector<vector<int>> shiftGrid(vector<vector<int>> &grid, int k)
    {   
        vector<int> arr;
        for (int i = 0; i < grid.size(); i++)
            for (int j = 0; j < grid[i].size(); j++)
                arr.push_back(grid[i][j]);

        k = k % (grid.size() * grid[0].size());

        while (k--)
            f(arr);

        int idx = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                grid[i][j] = arr[idx];
                idx++;
            }
        }
        return grid;
    }
};