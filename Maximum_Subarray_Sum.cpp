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

    ll maxm = -1e17, curr = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        curr += x;
        maxm = max(maxm, curr);
        if (curr < 0)
            curr = 0;
    }
    cout << maxm;
}
int main()
{
    solve();
    return 0;
}