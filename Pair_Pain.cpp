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
        ll ones = 0, twos = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                ones++;
            if (arr[i] == 2)
                twos++;
        }

        ll ans = 0, to_add = n - 1;
        while (ones--)
            ans += to_add, to_add--;

        ans += (twos * (twos - 1)) / 2;

        cout << ans << endl;
    }
    return 0;
}