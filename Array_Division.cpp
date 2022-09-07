// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

bool isPossible(ll mid, vector<ll> &arr, int &k)
{
    ll currSum = 0, currCnt = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > mid || currCnt > k)
            return false;
        if (currSum + arr[i] > mid)
            currCnt++, currSum = arr[i];
        else
            currSum += arr[i];
    }
    return (k >= currCnt);
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    ll lo = arr[n - 1], hi = sum, ans = hi, mid;

    while (lo <= hi)
    {
        mid = lo + (hi - lo) / 2;
        if (isPossible(mid, arr, k))
            ans = mid, hi = mid - 1;
        else
            lo = mid + 1;
    }

    cout << ans;
}
int main()
{
    solve();
    return 0;
}