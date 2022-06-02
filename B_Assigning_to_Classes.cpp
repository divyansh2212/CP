// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> skills(2 * n);

        for (ll i = 0; i < 2 * n; i++)
            cin >> skills[i];

        sort(skills.begin(), skills.end());

        ll ans = INT_MAX;

        ans = skills[n] - skills[n - 1];

        cout << ans << endl;
    }
    return 0;
}