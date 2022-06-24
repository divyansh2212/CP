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
        int n, m;
        cin >> n >> m;

        vector<ll> arr(n);
        vector<int> mp(m, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i] % m]++;
        }

        int cnt = 0;
        for (int r = 0; r <= m / 2; r++)
        {
            if (mp[r])
                cnt++;
            else
                continue;
            if (r == 0 || m == (m - r))
            {
                mp[r] = 0;
                continue;
            }
            if (mp[r] == mp[m - r])
                mp[r] = 0,
                mp[m - r] = 0;
            else if (mp[r] > mp[m - r])
            {
                int sz1 = mp[r];
                int sz2 = mp[m - r];
                mp[m - r] = 0;
                mp[r] = (sz1 - sz2 - 1);
            }
            else
            {
                int sz2 = mp[r];
                int sz1 = mp[m - r];
                mp[r] = 0;
                mp[m - r] = (sz1 - sz2 - 1);
            }
        }

        for (int i = 1; i < m; i++)
            cnt += mp[i];
        cout << cnt << endl;
    }
    return 0;
}