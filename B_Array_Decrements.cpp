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

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        bool flag = true;

        int diff = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
                flag = false;

            if (diff != INT_MAX && (a[i] - b[i]) != diff && b[i] != 0)
                flag = false;

            if (b[i] != 0)
                diff = a[i] - b[i];
        }

        if (flag)
            for (int i = 0; i < n; i++)
                if (b[i] == 0)
                    if (a[i] - b[i] > diff)
                        flag = false;

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}