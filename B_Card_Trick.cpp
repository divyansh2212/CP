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

        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }

        ll ans = 0, m;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            ans += x;
        }

        ans = ans % n;
        cout << a[ans] << endl;
    }
    return 0;
}