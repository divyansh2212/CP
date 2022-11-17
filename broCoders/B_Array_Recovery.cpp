// <-------------------- Jai Shree Babosa -------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<ll> a(n);
    a[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        ll ele1 = -1 * arr[i] + a[i - 1];
        ll ele2 = arr[i] + a[i - 1];
        if (ele1 >= 0 && ele2 >= 0 && ele1 != ele2)
        {
            cout << -1 << "\n";
            return;
        }
        if (ele1 < 0 && ele2 < 0)
        {
            cout << -1 << "\n";
            return;
        }
        if (ele1 >= 0)
            a[i] = ele1;
        else
            a[i] = ele2;
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}