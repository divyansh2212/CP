// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, t;
    cin >> n >> t;
    vector<ll> times(n);
    for (int i = 0; i < n; i++)
        cin >> times[i];

    ll currTime = 0, i = 0, j = 0, ans = 0;

    while (j < n)
    {
        currTime += times[j];
        if (currTime > t)
        {
            ans = max(ans, j - 1 - i + 1);
            currTime -= times[i];
            i++;
        }
        else
            ans = max(ans, j - i + 1);
        j++;
    }
    cout << ans;
}
int main()
{
    solve();
    return 0;
}