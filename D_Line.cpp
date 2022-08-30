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

    // ll i = 0, j = n - 1, k;
    // ll curr = 0;
    // while (i <= j)
    // {
    //     if (s[i] == 'R')
    //         curr += (n - i - 1);
    //     else if (s[i] == 'L')
    //         curr += i;
    //     if (i == j)
    //         break;
    //     if (s[j] == 'R')
    //         curr += (n - j - 1);
    //     else if (s[j] == 'L')
    //         curr += j;
    //     i++, j--;
    // }

    // vector<ll> ans(n, curr);

    // i = 0, j = n - 1, k = 1, curr = 0;
    // while (i <= j)
    // {
    //     if (s[i] == 'L' && s[j] == 'R' && (i <= (n / 2) - 1) && (j >= n / 2))
    //     {
    //         if (n - 1 - j < i)
    //         {
    //             curr += (j - (n - 1 - j));
    //             ans[k - 1] += curr;
    //             k++, j--;
    //         }
    //         else
    //         {
    //             curr += (n - 1 - i - i);
    //             ans[k - 1] += curr;
    //             k++, i++;
    //         }
    //     }
    //     else if (s[i] == 'L' && i <= (n / 2) - 1)
    //     {
    //         curr += (n - 1 - i - i);
    //         ans[k - 1] += curr;
    //         k++, i++;
    //     }
    //     else if (s[j] == 'R' && j >= n / 2)
    //     {
    //         curr += (j - (n - 1 - j));
    //         ans[k - 1] += curr;
    //         k++, j--;
    //     }
    //     else if (j < n / 2)
    //         i++;
    //     else if (i > (n / 2 - 1))
    //         j--;
    //     else
    //         i++, j--;
    // }

    // for (ll i = k; i <= n; i++)
    //     ans[i - 1] += curr;
    if (n % 2)
        s[n / 2] = 'L';

    string ideal = s;
    int i = 0, wrong = 0, j = n - 1;
    while (i <= (n / 2) - 1)
    {
        ideal[i] = 'R';
        if (s[i] != ideal[i])
            wrong++;
        i++;
    }

    i = (n / 2);
    while (i < n)
    {
        ideal[i] = 'L', i++;
        if (s[i] != ideal[i])
            wrong++;
        i++;
    }

    vector<ll> ans(n + 1, 0);
    ll maxm = 0, curr = n - 1;
    while (i <= j)
    {
        if (i == j)
        {
            maxm += curr;
            break;
        }
        maxm += (2 * curr);
        curr--, i++, j--;
    }

    for (int i = wrong; i <= n; i++)
        ans[i] = maxm;

    for (ll i = 1; i <= n; i++)
        cout << ans[i] << " ";
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