// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<ll> positives, negatives;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x > 0)
            positives.push_back(x);
        else if (x < 0)
            negatives.push_back(-1 * x);
    }

    sort(positives.begin(), positives.end());
    sort(negatives.begin(), negatives.end());

    ll ans = 0;
    for (int i = positives.size() - 1; i >= 0; i -= k)
        ans += (2 * positives[i]);
    for (int i = negatives.size() - 1; i >= 0; i -= k)
        ans += (2 * negatives[i]);

    if (positives.size() && negatives.size())
    {
        if (positives[positives.size() - 1] > negatives[negatives.size() - 1])
            ans -= positives[positives.size() - 1];
        else
            ans -= negatives[negatives.size() - 1];
    }
    else if (positives.size())
        ans -= positives[positives.size() - 1];
    else if (negatives.size())
        ans -= negatives[negatives.size() - 1];

    cout << ans << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}