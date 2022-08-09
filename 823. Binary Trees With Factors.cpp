// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int numFactoredBinaryTrees(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        map<int, ll> mp;
        int n = arr.size();
        for (int i = 0; i < arr.size(); i++)
            mp[arr[i]] = 1;

        for (int i = 0; i < arr.size(); i++)
        {
            ll cnt = 0;
            for (int j = 0; j < i; j++)
                if (arr[i] % arr[j] == 0 && mp.find(arr[i] / arr[j]) != mp.end())
                    cnt += mp[arr[j]] * mp[arr[i] / arr[j]];

            mp[arr[i]] += cnt;
        }

        ll ans = 0;
        for (auto &it : mp)
            ans += it.second;

        return (int)(ans % mod);
    }
};