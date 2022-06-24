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
        int n, x;
        cin >> n >> x;

        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        if (n >= 2 * x)
        {
            cout << "YES\n";
            continue;
        }

        vector<ll> sorted = arr;
        sort(sorted.begin(), sorted.end());

        bool flag = true;

        for (int i = n - x; i <= x - 1; i++)
            if (arr[i] != sorted[i])
                flag = false;

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}