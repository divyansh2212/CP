// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int climbStairs(int n)
    {
        int prev = 1, prev2 = 0;

        for (int i = 1; i <= n; i++)
        {
            int curr = prev2 + prev;
            prev2 = prev;
            prev = curr;
        }

        return prev;
    }
};