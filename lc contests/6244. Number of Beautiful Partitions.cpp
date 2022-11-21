// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    ll f(string &s, int i, int j, int partition, int &k, int &minLength)
    {
        int n = s.length();
        if (partition > k)
            return 0;
        if (j == n)
        {
            if (partition == k && j - i >= minLength)
                return 1;
            return 0;
        }
        if (j - i + 1 < minLength || s[j] == '2' || s[j] == '3' || s[j] == '5' || s[j] == '7')
            return f(s, i, j + 1, partition, k, minLength);
        ll ans = f(s, i, j + 1, partition, k, minLength);
        for (int idx = j + 1; idx < n; idx++)
        {
            if (s[idx] == '2' || s[idx] == '3' || s[idx] == '5' || s[idx] == '7')
                ans += f(s, idx, idx, partition + 1, k, minLength);
        }

        return (ans % mod);
    }

public:
    int beautifulPartitions(string s, int k, int minLength)
    {
        int n = s.length();
        if (s[0] == '4' || s[0] == '6' || s[0] == '8' || s[0] == '9' || s[0] == '1' || s[n - 1] == '2' || s[n - 1] == '3' || s[n - 1] == '5' || s[n - 1] == '7' || minLength == 1   )
            return 0;

        int ans = f(s, 0, 0, 1, k, minLength);
        return ans;
    }
};