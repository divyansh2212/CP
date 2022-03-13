#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;

    vector<ll> arr(n);
    ll tot = 0, zeroes = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        tot += arr[i];
        if (arr[i] == 0)
            zeroes++;
    }

    ll counters = 0, curr_sum = 0;
    for (ll i = 0; i < n; i++)
    {
        curr_sum += arr[i];
        if (curr_sum == tot / 3)
        {
            counters++;
            curr_sum = 0;
        }
    }

    if ((tot % 3) || n < 3 || counters < 3)
    {
        cout << 0;
        return 0;
    }

    ll curr = 0, ans = 0;
    for (ll i = 1; i < n - 1; i++)
    {
        if (arr[i] == 0)
            curr++;
        else
        {
            ans += (curr * (curr + 1)) / 2;
            curr = 0;
        }
    }
    ans += (curr * (curr + 1)) / 2;

    if (zeroes != n)
        ans++;

    cout
        << ans;
    return 0;
}