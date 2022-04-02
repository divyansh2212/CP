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

        vector<int> arr(n);
        vector<int> hsh(101, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            hsh[arr[i]]++;
        }

        int ans = 0;
        for (int i = 0; i < 101; i++)
        {
            if (hsh[i] % 2)
                ans++;
        }

        if ((n + ans) % 4 == 0)
            cout << ans << endl;
        else
            cout << ans + 4 - ((n + ans) % 4) << endl;
    }
    return 0;
}