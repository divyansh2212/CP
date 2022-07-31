// Jai Shree Babosa!

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
    bool flag = false;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        if (arr[i])
            flag = true;
    }
    if (flag == false)
    {
        cout << 0 << endl;
        return;
    }
    sort(arr.begin(), arr.end());
    sum -= arr[n - 1];

    if (arr[n - 1] - sum > 1)
        cout << arr[n - 1] - sum << endl;
    else
        cout << 1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}