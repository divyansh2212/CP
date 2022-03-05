#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 10;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        ll n, x;
        cin >> n >> x;

        bool flag = false;
        for (ll len = 1; len <= n && len <= x; len++)
        {
            if (x % len == 0)
            {
                if ((x / len) + len - 1 <= n)
                    flag = true;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}