// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 10;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        unordered_map<int, int> mp;
        int ans = 0;
        for (int i = 1; i < n + 1; i++)
        {
            int x;
            cin >> x;
            mp[x] = i;
        }

        for (int i = 3; i < 2 * n; i++)
        {
            for (int j = 1; j * j <= i; j++)
            {
                if (i % j == 0 && j != (i / j))
                {
                    if (mp.find(j) != mp.end() && mp.find(i / j) != mp.end() && i == mp[j] + mp[i / j])
                        ans++;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}