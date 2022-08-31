// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf ll_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll n;
    cin >> n;

    string s;
    cin >> s;

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
            ans += i;
        else
            ans += (n - 1 - i);
    }

    int lower = n / 2, upper = (n / 2) - ((n + 1) % 2);
    int l = 0, r = n - 1;

    for (int i = 1; i <= n; i++)
    {
        while (l < lower && s[l] == 'R')
            l++;
        while (r > upper && s[r] == 'L')
            r--;

        ll profitL = (n - 1 - l) - l;
        ll profitR = r - (n - 1 - r);

        if (profitL < 0 && profitR < 0)
        {
            cout << ans << " ";
            continue;
        }

        if (profitL < profitR)
            ans += profitR, r--;
        else
            ans += profitL, l++;

        cout << ans << " ";
    }
    cout << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}