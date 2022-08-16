// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll n, q;
    cin >> n >> q;

    vector<ll> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    while (q--)
    {
        ll i, k;
        cin >> i >> k;

        bool flag = true;
        for (int j = 1; j < i; j++)
        {
            if (arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == false)
        {
            cout << 0 << endl;
            continue;
        }

        if (arr[i] == n)
        {
            if (i == 1 || i == 2)
                cout << k << endl;
            else
            {
                ll ans = k - (i - 2);
                if (ans < 0)
                    ans = 0;
                cout << ans << endl;
            }
            continue;
        }

        int j = i - 1, cnt = i - 2, ans = 0;
        if (j < 1)
            j = 1;
        if (cnt < 0)
            cnt = 0;
        while (cnt < k && j <= n)
        {
            if (arr[j] > arr[i])
                break;
            if (j != i)
                ans++, cnt++;
            j++;
        }
        cout << ans << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}