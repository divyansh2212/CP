// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (n == 1)
    {
        cout << "1 1" << endl;
        cout << 0 << endl;
        cout << "1 1" << endl;
        cout << 0 << endl;
        cout << "1 1" << endl;
        cout << -arr[0] << endl;
        return;
    }

    cout << "1 1" << endl;
    cout << -arr[0] << endl;
    arr[0] = 0;
    cout << "2 " << n << endl;
    for (int i = 1; i < n; i++)
    {
        ll val = (arr[i] % n) * (n - 1);
        arr[i] += val;
        cout << val << " ";
    }
    cout << endl;
    cout << 1 << " " << n << endl;
    for (int i = 0; i < n; i++)
        cout << -arr[i] << " ";
    cout << endl;
}
int main()
{
    solve();
    return 0;
}