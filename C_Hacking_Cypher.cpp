// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll power(ll a, ll b, ll mod)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans *= a;
            ans %= mod;
        }

        a *= a;
        a = a % mod;
        b = (b >> 1);
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;

    ll a, b;
    cin >> a >> b;

    string dividend1 = "";
    vector<ll> indices(s.length(), -1);
    ll idx = 1e9;

    for (ll i = 0; i < s.length() - 1; i++)
    {
        dividend1 += s[i];
        ll dividend = stoi(dividend1);

        if (dividend >= a)
        {
            ll rem = dividend % a;
            if (rem == 0)
            {
                dividend1 = "";
                idx = i;
                while (i < s.length() - 1)
                {
                    i++;
                    if (i < s.length() && s[i] == '0')
                        idx = i;
                    else
                        break;
                }
                i = idx;
                indices[idx] = 0;
            }
            else
                dividend1 = to_string(rem);
        }
    }

    if (idx == 1e9)
        cout << "NO";

    else
    {
        ll fnlAns = 1e9;

        bool flag = false;
        ll rem = 0;
        for (ll i = s.length() - 1; i >= 0; i--)
        {
            ll rem_cont = power(10, s.length() - 1 - i, b);
            rem_cont *= (s[i] - '0');
            rem_cont = (rem_cont % b);
            rem += rem_cont;
            rem %= b;
            if (rem == 0)
            {
                if (i - 1>= 0 && indices[i - 1] == 0)
                {
                    fnlAns = i - 1;
                    flag = true;
                    break;
                }
            }
        }

        if (flag)
        {
            cout << "YES\n";
            cout << s.substr(0, fnlAns + 1) << endl;
            cout << s.substr(fnlAns + 1) << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}