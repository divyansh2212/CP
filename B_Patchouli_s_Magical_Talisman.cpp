// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr;
        bool isOdd = false, isEven = false;
        ll no_odds = 0, no_evens = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if ((x % 2) == 0)
            {
                isEven = true, no_evens++;
                arr.push_back(x);
            }
            else
                isOdd = true, no_odds++;
        }

        ll ans = INT_MAX;
        if (isEven == false)
        {
            cout << 0 << endl;
            continue;
        }

        if (isOdd)
            ans = no_evens;

        vector<pair<ll, ll>> nos;
        ll temp = 0;
        for (ll x = 0; x < arr.size(); x++)
        {
            ll consec_zero = 0;
            for (ll i = 0; i < 32; i++)
            {
                if ((arr[x] & (1 << i)) == 0)
                    consec_zero++;
                else
                    break;
            }
            temp += consec_zero;
            nos.push_back({consec_zero, arr[x]});
        }
        sort(nos.begin(), nos.end());
        ans = min(ans, temp);

        if (nos.size() > 1)
        {
            temp = 0;
            ll frst = nos[0].second;

            temp++;
            ll c_zero = INT_MAX;
            for (ll x = 1; x < nos.size(); x++)
            {
                ll new_n = frst + nos[x].second;
                ll consec_zero = 0;
                for (int i = 0; i < 32; i++)
                {
                    if ((new_n & (1 << i)) == 0)
                        consec_zero++;
                    else
                        break;
                }
                c_zero = min(c_zero, consec_zero);
            }

            temp += c_zero + nos.size() - 2;
            ans = min(ans, temp);
        }

        if (nos.size())
        {
            temp = 0;
            temp += nos[0].first + nos.size() - 1;
            ans = min(ans, temp);
        }

        cout << ans << endl;
    }
    return 0;
}