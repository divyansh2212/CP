// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int mostBooked(int n, vector<vector<int>> &meetings)
    {
        vector<int> start;
        vector<int> end;
        for (int i = 0; i < n; i++)
        {
            start.push_back(meetings[i][0]);
            end.push_back(meetings[i][1]);
        }
    }
};