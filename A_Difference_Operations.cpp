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

        vector<ll> arr(n);
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            // if (i > 0 && arr[i] < arr[i - 1])
            //     flag = false;
        }

        for (int i = 1; i < n; i++)
        {
            ll to_sub = abs(arr[i] - arr[i - 1]);
            if (to_sub % arr[0])
                flag = false;
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}