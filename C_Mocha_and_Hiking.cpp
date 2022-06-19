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

        vector<int> a(n + 1);
        int cnt0 = 0, cnt1 = 1, breakpoint = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (i - 1 >= 1)
                if (a[i] == 1 && a[i - 1] == 0)
                    breakpoint = i - 1;
            a[i] ? cnt1++ : cnt0++;
        }

        if (cnt1 == 0 || a[n] == 0)
            for (int i = 1; i <= n + 1; i++)
                cout << i << " ";

        else if (cnt0 == 0)
        {
            cout << n + 1 << " ";
            for (int i = 1; i <= n; i++)
                cout << i << " ";
        }

        else
        {
            for (int i = 1; i <= breakpoint; i++)
                cout << i << " ";
            cout << n + 1 << " ";
            for (int i = breakpoint + 1; i <= n; i++)
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}