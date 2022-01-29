#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (b[i] - a[i] != x || b[i] - a[i] != y)
                flag = false;
        }
        if (flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}