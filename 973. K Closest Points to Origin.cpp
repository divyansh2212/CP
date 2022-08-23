// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
    {
        int n = points.size();
        k = n - k;

        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < n; i++)
        {
            int dist = points[i][0] * points[i][0] + points[i][1] * points[i][1];
            pq.push({dist, i});
        }

        while (k--)
            pq.pop();

        vector<vector<int>> ans;
        while (!pq.empty())
        {
            auto top = pq.top();
            pq.pop();
            ans.push_back(points[top.second]);
        }

        return ans;
    }
};