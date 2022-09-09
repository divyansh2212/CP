// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    static bool comp(vector<int> &a, vector<int> &b)
    {
        if (a[0] == b[0])
            return a[1] > b[1];
        return a[0] < b[0];
    }

public:
    int numberOfWeakCharacters(vector<vector<int>> &properties)
    {
        int n = properties.size(), ans = 0;

        sort(properties.begin(), properties.end(), comp);

        int currMax = -1;

        for (int i = n - 1; i >= 0; i--)
        {
            if (currMax > properties[i][1])
                ans++;
            currMax = max(currMax, properties[i][1]);
        }

        return ans;
    }
};