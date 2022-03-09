#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int circle = abs(a - b) * 2;
        if (a > circle || b > circle || c > circle)
            cout << -1 << endl;
        else
        {
            int ans = c + (circle / 2);
            if (ans > circle)
                ans = c - (circle / 2);
            cout << ans << endl;
        }
    }
    return 0;
}