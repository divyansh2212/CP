// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int edgeScore(vector<int> &edges)
    {
        int n = edges.size();
        vector<ll> eachEdgeScore(n, 0);
        for (int i = 0; i < n; i++)
            eachEdgeScore[edges[i]] += i;

        int ansEdge = -1;
        ll curr = -1;
        for (int i = 0; i < n; i++)
            if (curr < eachEdgeScore[i])
                curr = eachEdgeScore[i], ansEdge = i;
        return ansEdge;
    }
};