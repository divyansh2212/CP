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
        ll a, b, n;
        cin >> a >> b >> n;

        if (b > a)
            swap(a, b);

        bool flag = true;
        ll ans = 0;
        while (a <= n && b <= n)
        {
            if (flag)
                b += a;
            else
                a += b;
            ans++;
            flag = !flag;
        }

        cout << ans << endl;
    }
    return 0;
}