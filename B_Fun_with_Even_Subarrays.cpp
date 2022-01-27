#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // int a[n];
        vector<int> a(n);
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        // int b[n] = a;
        vector<int> b = a;
        set<pair<int, int>> nos;
        int initia = s.size();
        if (s.size() == 1)
        {
            cout << 0 << endl;
            continue;
        }
        // if (s.size() == 2)
        // {
        //     cout << 1 << endl;
        //     continue;
        // }
        int minm = INT_MAX;

        bool flag = false;

        for (int l = 0; l < n; l++)
        {
            for (int k = 1; l + (2 * k) - 1 < n; k++)
            {
                for (int i = 0; i < k; i++)
                {
                    if (a[l + k + i] != a[l + i])
                    {
                        s.erase(a[l + i]);
                        a[l + i] = a[l + k + i];
                        nos.insert({l, k});
                        if (s.size() == 1)
                        {
                            int n = nos.size();
                            minm = min(minm, n);
                            nos.clear();
                        }
                    }
                }
            }
        }

        cout << minm << endl;
    }

    return 0;
}