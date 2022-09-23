// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll n, p;
    cin >> n >> p;

    vector<ll> arr(2 * n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll preSum = accumulate(arr.begin(), arr.end(), 0LL);

    ll to_mul = p / preSum;
    p = (p % preSum);

    for (int i = n; i < 2 * n; i++)
        arr[i] = arr[i - n];

    ll i = 0, j = 0, ansIdx = -1, len = 1e18 + 10, sum = 0;

    while (i < n)
    {
        while (sum < p && j < 2 * n)
        {
            sum += arr[j];
            j++;
        }

        if (j - i < len)
            len = j - i, ansIdx = i;

        sum -= arr[i];
        i++;
    }

    cout << ansIdx + 1 << " " << n * to_mul + len;
}
int main()
{
    solve();
    return 0;
}