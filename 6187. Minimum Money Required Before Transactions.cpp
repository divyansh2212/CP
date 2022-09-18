// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    bool static cmp(vector<int> &a, vector<int> &b)
    {
        int choice1 = min(-a[0], -a[0] + a[1] - b[0]), choice2 = min(-b[0], -b[0] + b[1] + -a[0]);

        if (choice1 == choice2)
            return a[0] > b[0];

        return choice1 < choice2;
    }

    bool check(ll mid, vector<vector<int>> &trans)
    {
        for (int i = 0; i < trans.size(); i++)
        {
            mid = mid - trans[i][0];
            if (mid < 0)
                return false;
            mid = mid + trans[i][1];
        }

        return (mid >= 0);
    }

public:
    long long minimumMoney(vector<vector<int>> &transactions)
    {
        sort(transactions.begin(), transactions.end(), cmp);

        ll lo = 1, hi = 1e18, mid, ans;

        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            if (check(mid, transactions))
                hi = mid - 1, ans = mid;
            else
                lo = mid + 1;
        }

        return ans;
    }
};