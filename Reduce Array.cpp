// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

int reduceArray(vector<int> &v)
{
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
        ans += log2(v[i]) + 1;

    return ans;
}
