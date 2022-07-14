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
        int n;
        cin >> n;

        map<int, int> mp;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            mx = max(mx, x);
        }

        int ans = 0, flag = 0;

        for (auto &it : mp)
        {
            if (it.second == 1)
                ans++;
            else if (it.second > 2)
                flag = 1;
        }

        if (ans)
        {
            if (ans == 1)
            {
                if (mp[mx] == 1)
                {
                    if (flag == 0)
                        ans = 2;
                    else
                        ans = 1;
                }
                else
                    ans = 1;
            }
            else if (ans % 2)
                ans = (ans / 2) + 1;
            else
                ans = (ans / 2);
        }

        cout << ans << endl;
    }
    return 0;
}