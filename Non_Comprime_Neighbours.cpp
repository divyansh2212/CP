#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<bool> flags(n, false);
        for (int i = 1; i < n; i++)
        {
            if (__gcd(arr[i], arr[i - 1]) == 1)
                flags[i] = true;
        }

        ll moves = (2 * n) / 3;

        ll i = 0;
        while (i < n)
        {
            if (i + 2 < n)
            {
                if (flags[i] && flags[i + 1] && flags[i + 2])
                {
                    if (arr[i] * arr[i + 2] <= 1e6)
                        arr[i + 1] = arr[i] * arr[i + 2];
                    flags[i + 1] = false, flags[i + 2] = false;
                    i += 3;
                }
            }
            else if (flags[i])
            {
                arr[i] = arr[i - 1], flags[i] = false;
                if (i + 1 < n)
                    if (__gcd(arr[i], arr[i + 1]) > 1)
                        flags[i + 1] = false;
                i += 2;
            }
            else
                i++;
        }

        for (int i = 0; i < n; i++)
        {
            if (flags[i] && i > 0)
                arr[i] = arr[i - 1];
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}