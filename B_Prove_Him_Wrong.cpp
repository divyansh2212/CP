#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr(n);
        arr[0] = 1;

        bool flag = false;
        for (ll i = 1; i < n; i++)
        {
            arr[i] = arr[i - 1] * 3;
            if (arr[i] > 1e9)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            for (ll i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
    return 0;
}