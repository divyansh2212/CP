// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    ll kthLargestSum(vector<int> &arr, int n, int k)
    {
        // array to store prefix sums
        ll sum[n + 1];
        sum[0] = 0;
        sum[1] = arr[0];
        for (int i = 2; i <= n; i++)
            sum[i] = sum[i - 1] + arr[i - 1];

        // priority_queue of min heap
        priority_queue<ll, vector<ll>, greater<ll>> Q;

        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j++)
            {
                ll x = sum[j] - sum[i - 1];

                if (Q.size() < k)
                    Q.push(x);

                else
                {
                    if (Q.top() < x)
                    {
                        Q.pop();
                        Q.push(x);
                    }
                }
            }
        }
        return Q.top();
    }

public:
    ll kSum(vector<int> &nums, int k)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());

        return kthLargestSum(nums, n, k);
    }
};