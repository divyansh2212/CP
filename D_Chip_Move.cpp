// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 998244353;

void f(vector<ll> &arr, int k, int curr, int &n)
{
    for (int i = curr + k; i <= n;)
    {
        if ((i - curr) % k == 0)
        {
            arr[i]++;
            arr[i] = (arr[i] % mod);
            f(arr, k + 1, i, n);
            i += k;
        }
        else
            i++;
    }
}

void solve()
{
    int k, n;
    cin >> n >> k;

    vector<ll> arr(n + 1, 0);
    f(arr, k, 0, n);
    for (int i = 1; i < n + 1; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}