// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    vector<vector<string>> mostPopularCreator(vector<string> &creators, vector<string> &ids, vector<int> &views)
    {
        map<string, pair<pair<long long, string>, int>> mapping;
        long long highestViews = -1;
        for (int i = 0; i < ids.size(); i++)
        {
            if (mapping.find(creators[i]) != mapping.end())
            {
                mapping[creators[i]].first.first += (0LL + views[i]);
              
                if (views[i] >= mapping[creators[i]].second)
                {
                    if (views[i] == mapping[creators[i]].second)
                        mapping[creators[i]].first.second = min(mapping[creators[i]].first.second, ids[i]);
                    else
                        mapping[creators[i]].first.second = ids[i];
                    mapping[creators[i]].second = views[i];
                }
            }
            else
                mapping[creators[i]] = {{views[i], ids[i]}, views[i]};
            highestViews = max(highestViews, mapping[creators[i]].first.first);
        }

        vector<vector<string>> ans;
        for (auto &it : mapping)
            if (highestViews == it.second.first.first)
                ans.push_back({it.first, it.second.first.second});
        return ans;
    }
};