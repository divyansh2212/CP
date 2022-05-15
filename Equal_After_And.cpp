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
        vector<ll> farr;
        bool flag = true;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i > 0)
            {
                if (arr[i] != arr[i - 1])
                    flag = false;
            }
            if (i == 0)
                farr.push_back(arr[i]);
            else if (farr[farr.size() - 1] == 0 && arr[i] == 0)
                continue;
            else
                farr.push_back(arr[i]);
        }

        int ans = farr.size() - 1;
        if (flag)
        {
            cout << 0 << endl;
            continue;
        }

        int i = 0, extras1 = 0, extras2 = 0;

        while (i < farr.size())
        {
            if ((farr[i] & farr[i + 1]) == 0)
            {
                extras1++;
                i += 2;
            }
            else
                i++;
        }

        i = 1;
        while (i < farr.size())
        {
            if ((farr[i] & farr[i + 1]) == 0)
            {
                extras2++;
                i += 2;
            }
            else
                i++;
        }

        int fnlExtra = max(extras1, extras2);
        if (fnlExtra)
            ans -= fnlExtra - 1; 

        cout << ans << endl;
    }
    return 0;
}