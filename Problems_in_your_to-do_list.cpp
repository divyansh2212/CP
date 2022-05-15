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

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x >= 1000)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}