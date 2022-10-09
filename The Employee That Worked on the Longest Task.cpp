// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int hardestWorker(int n, vector<vector<int>> &logs)
    {
        int sz = logs.size();

        int start = 0, id = -1, time = -1;

        for (int i = 0; i < sz; i++)
        {
            if (logs[i][1] - start > time)
                time = logs[i][1] - start, id = logs[i][0];
            else if (logs[i][1] - start == time)
                id = min(id, logs[i][0]);
            start = logs[i][1];
        }
        return id;
    }
};