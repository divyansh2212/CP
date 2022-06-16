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
        ll n;
        cin >> n;

        string s;
        cin >> s;

        ll ans = n;

        for (int i = n - 1; i > 0; i--)
            if (s[i] != s[i - 1])
                ans += i;

        cout << ans << endl;
    }
    return 0;
}