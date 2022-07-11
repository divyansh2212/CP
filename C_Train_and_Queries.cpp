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

        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x].push_back(i);
        }

        while (k--)
        {
            int a, b;
            cin >> a >> b;

            if (mp.find(a) == mp.end() || mp.find(b) == mp.end())
                cout << "NO\n";

            else
            {
                if (a == b)
                    cout << "YES\n";

                else
                {
                    int station1 = mp[a][0], station2 = mp[b][mp[b].size() - 1];
                    if (station1 <= station2)
                        cout << "YES\n";
                    else
                        cout << "NO\n";
                }
            }
        }
    }
    return 0;
}