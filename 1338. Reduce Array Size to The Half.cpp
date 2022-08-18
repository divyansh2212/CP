// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int minSetSize(vector<int> &arr)
    {
        int n = arr.size();
        unordered_map<int, int> hsh;
        for (int i = 0; i < n; i++)
            hsh[arr[i]]++;

        int cnt = n, ans = 0;
        vector<int> pairs;
        for (auto &it : hsh)
            pairs.push_back(it.second);

        sort(pairs.begin(), pairs.end());
        while (pairs.size())
        {
            cnt -= pairs.back();
            pairs.pop_back();
            ans++;
            if (cnt <= n / 2)
                break;
        }

        return ans;
    }
};