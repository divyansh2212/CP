// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    vector<ll> arr(n + 1);
    for (int i = 1; i < n + 1; i++)
        cin >> arr[i];

    if (n == 1)
    {
        cout << 0 << "\n";
        return;
    }

    cout << n - 1 << "\n";

    cout << 1 << " " << n << "\n";
    ll ele = -1;
    if ((arr[1] + arr[n]) % 2)
        ele = arr[1];
    else
        ele = arr[n];

    for (int i = n - 1; i >= 2; i--)
    {
        if ((arr[i] + ele) % 2)
            cout << 1 << " " << i << "\n";
        else
            cout << i << " " << i + 1 << "\n";
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