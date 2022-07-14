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
        int n, k;
        cin >> n >> k;

        map<int, int> mp;
        int num = -1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            if (mp[x] >= k)
                num = x;
        }
        mp[1e9 + 5]++;

        if (num == -1)
        {
            cout << -1 << endl;
            continue;
        }

        int l1 = num, r1 = num;

        int l = -1, r = -1, streak = 0, currStreak = 0, last = -1;
        for (auto &it : mp)
        {
            if (it.second < k || it.first - last > 1)
            {
                if (currStreak > streak)
                {
                    streak = currStreak;
                    l1 = l, r1 = r;
                }
                l = it.first, r = it.first;
                currStreak = 1, last = it.first;
                if (it.second < k)
                    currStreak = 0, l = -1, r = -1, last = -1;
            }
            else
            {
                if (l == -1)
                    l = it.first;
                r = it.first;
                last = it.first;
                currStreak++;
            }
        }

        cout << l1 << " " << r1 << endl;
    }
    return 0;
}