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
    bool isFive = false;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 5 == 0)
            isFive = true;
    }

    if (isFive)
    {
        for (int i = 0; i < n; i++)
            if (arr[i] % 5)
                isFive = false;
        if (isFive)
            cout << "Yes\n";
        else
            cout << "No\n";
        return;
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