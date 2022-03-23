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

        vector<int> b(n);
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] > i + 1)
                flag = true;
        }

        if (flag)
            cout << -1 << endl;

        else
        {
            vector<int> a(n, -1);

            for (int i = n - 1; i >= 0; i--)
            {
                if (b[i] == -1)
                    a[i] = 1;
                else
                {
                    if (b[i] > i)
                        a[i] = b[i] - 1;
                    else
                        a[i] = b[i] + 1;
                }
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}