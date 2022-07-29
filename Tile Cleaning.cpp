// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

int tileCleaning(int n, int k)
{
    int ans = (2 * (k - 1)) + n - k;
    ans = min(ans, (2 * (n - k)) + k - 1);
    return ans;
}