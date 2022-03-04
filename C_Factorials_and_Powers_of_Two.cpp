#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    unordered_map<ll, int> is_powerful;

    ll var = 1;
    for (int i = 1; i < 15; i++)
    {
        var *= i;
        is_powerful[var] = 1;
    }

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        if (is_powerful[n] == 1 || (n & (n - 1LL)) == 0)
            cout << 1 << endl;
        else
        {
            ll ans1 = 1;
            ll n_copy = n;
            while (n)
            {
                ll bits = log2(n);
                ans1++;
                n -= (1LL << bits);
                if (is_powerful[n] == 1 || (n & (n - 1LL)) == 0)
                    break;
            }

            ll ans2 = 1;
            while (n_copy)
            {
                for (ll i = n_copy - 1; i >= 2; i--)
                {
                    if (is_powerful[i] == 1 || (i & (i - 1LL)) == 0)
                    {
                        n_copy -= i;
                        ans2++;
                        break;
                    }
                }
                if (is_powerful[n_copy] == 1 || (n_copy & (n_copy - 1LL)) == 0)
                    break;
            }

            cout << min(ans1, ans2) << endl;
        }
    }
    return 0;
}