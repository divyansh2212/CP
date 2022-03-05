#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll cnt(ll n)
{
    ll ans = 0;
    while (n)
    {
        if (n % 2)
            ans++;
        n /= 2;
    }
    return ans;
}

int main()
{
    ll fact[14];
    fact[0] = 1;
    for (ll i = 1; i < 14; i++)
        fact[i] = i * fact[i - 1];

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll ans = INT_MAX;

        for (ll i = 0; i < (1 << 15); i++)
        {
            ll sum = 0;
            for (ll j = 0; j < 15; j++)
            {
                if (i & (1 << j))
                    sum += fact[j];
            }
            if (sum > n)
                break;
            ll temp = cnt(i);
            temp += cnt(n - sum);
            ans = min(ans, temp);
        }
        cout<<ans<<endl;
    }
    return 0;
}