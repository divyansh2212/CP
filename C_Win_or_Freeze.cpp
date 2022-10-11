// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll q;
    cin >> q;

    vector<ll> factors;
    for (ll i = 2; i * i <= q; i++)
    {
        if (q % i == 0)
        {
            factors.push_back(i);
            factors.push_back(q / i);
        }
    }

    // for (int i = 0; i < factors.size(); i++)
    // {
    //     cout << factors[i] << " ";
    // }

    if (factors.size() == 0)
    {
        cout << 1 << "\n"
             << 0;
        return;
    }
    else if (factors.size() == 2)
    {
        // cout << 2;
        bool flag = false;
        for (int i = 0; i < 2; i++)
        {
            ll num = factors[i];
            vector<ll> facs;
            for (ll j = 2; j * j <= num; j++)
            {
                if (num % j == 0)
                {
                    facs.push_back(j);
                    facs.push_back(num / j);
                }
            }
            if (facs.size())
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << 2;
            return;
        }
    }

    for (int i = 0; i < factors.size(); i++)
    {
        ll num = factors[i];
        vector<ll> facs;
        for (ll j = 2; j * j <= num; j++)
        {
            if (num % j == 0)
            {
                facs.push_back(j);
                facs.push_back(num / j);
            }
        }
        if (facs.size() == 2)
        {
            vector<ll> inner;
            ll nums = facs[0];
            for (ll k = 2; k * k <= nums; k++)
            {
                if (nums % k == 0)
                {
                    inner.push_back(k);
                    inner.push_back(num / k);
                }
            }

            nums = facs[1];
            for (ll k = 2; k * k <= nums; k++)
            {
                if (nums % k == 0)
                {
                    inner.push_back(k);
                    inner.push_back(num / k);
                }
            }

            if (inner.size() == 0)
            {
                cout << 1 << "\n";
                cout << num;
                return;
            }
        }
    }
}
int main()
{
    solve();
    return 0;
}