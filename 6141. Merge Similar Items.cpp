// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>> &items1, vector<vector<int>> &items2)
    {
        map<int, int> mp;
        for (int i = 0; i < items1.size(); i++)
            mp[items1[i][0]] += items1[i][1];
        for (int i = 0; i < items2.size(); i++)
            mp[items2[i][0]] += items2[i][1];

        vector<vector<int>> ans;

        for (auto &it : mp)
            ans.push_back({it.first, it.second});

        return ans;
    }
};