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
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        if (n % 2)
        {
            for (int i = 1; i < n; i += 2)
                sort(arr.begin() + i, arr.begin() + i + 2);
            if (is_sorted(arr.begin(), arr.end()))
                cout << "YES\n";
            else
                cout << "NO\n";
        }

        else
        {
            for (int i = 0; i < n; i += 2)
                sort(arr.begin() + i, arr.begin() + i + 2);
            if (is_sorted(arr.begin(), arr.end()))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}