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
        ll n, q;
        cin >> n >> q;

        vector<ll> arr(n);
        bool flag = true;
        ll q_c = q, cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > q)
                q_c--, cnt++;
            if (q_c <= 0)
                flag = false;
        }

        if (q >= n || flag)
        {
            string ans(n, '1');
            cout << ans << endl;
            continue;
        }

        ll idx1 = 0, idx2 = 0;

        ll i = 0;
        while (i < n)
        {
            if (idx2 - idx1 >= (n - 1 - i))
                break;
            ll q_c = q; 
            ll j = i, k = min(i + q - 1, n - 1);
            while (j <= k && q_c > 0)
            {
                if (arr[j] <= q_c)
                    k = min(k + 1, n - 1);
                else
                    q_c--;
                j++;
            }
            if ((j - 1) - i > (idx2 - idx1))
                idx1 = i, idx2 = j - 1;
            if (idx2 == n - 1)
                break;
            i++;
        }

        string ans(n, '0');
        for (ll i = idx1; i <= idx2; i++)
            ans[i] = '1';

        cout << ans << endl;
    }
    return 0;
}