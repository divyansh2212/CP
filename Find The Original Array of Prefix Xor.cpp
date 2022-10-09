// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    vector<int> findArray(vector<int> &pref)
    {
        int n = pref.size();
        vector<int> ans(n);
        ans[0] = pref[0];

        for (int i = 1; i < n; i++)
            ans[i] = pref[i] ^ pref[i - 1];

        return ans;
    }
};