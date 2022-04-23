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

        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        ll equalities = 0, lastEquality;

        for (int i = 0; i < n - 1; i++)
            if (arr[i] == arr[i + 1])
                equalities++, lastEquality = i;

        if (equalities < 2)
        {
            cout << 0 << endl;
            continue;
        }

        ll curr = -1, ans = 0;

        for (ll i = 0; i < n - 1; i++)
        {
            if (i == lastEquality)
                break;
            if (arr[i] == arr[i + 1] && arr[i] > 0)
            {
                arr[i + 1] = curr, arr[i + 2] = curr;
                curr--, ans++;
            }
            else if (arr[i] == arr[i + 1] && arr[i] < 0)
                continue;
            else if (arr[i] < 0)
            {
                arr[i] = curr, arr[i + 1] = curr;
                curr--, ans++;
            }
        }

        cout << ans << endl;\
    }
    return 0;
}