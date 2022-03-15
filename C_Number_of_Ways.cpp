#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;

    vector<ll> arr(n);
    ll tot = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        tot += arr[i];
    }

    if ((tot % 3) || n < 3)
    {
        cout << 0;
        return 0;
    }

    ll target1 = tot / 3, target2 = 2 * (tot / 3), curr = 0;
    ll target1cnt = 0, ans=0;

    for (int i = 0; i < n - 1; i++)
    {
        curr += arr[i];

        if (curr == target2)
            ans += target1cnt;

        if (curr == target1)
            target1cnt++;
    }

    cout << ans;

    return 0;
}