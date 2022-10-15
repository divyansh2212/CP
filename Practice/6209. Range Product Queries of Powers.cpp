// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    vector<int> productQueries(int n, vector<vector<int>> &queries)
    {
        vector<ll> powers;
        int bits = log2(n);
        for (ll i = 0; i <= bits; i++)
            if ((n & (1LL << i)) != 0)
                powers.push_back(1LL << i);

        vector<int> ans;
        for (int i = 0; i < queries.size(); i++)
        {
            int x = queries[i][0], y = queries[i][1];
            ll pro = 1;
            for (int j = x; j <= y; j++)
                pro = (pro * powers[j]) % mod;
            ans.push_back(pro);
        }
        return ans;
    }
};