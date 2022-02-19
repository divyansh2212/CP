#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll k, x, ans = 0;
        cin >> k;
        scanf("%lld", &x);

        for (int i = 1; i <= k; i++)
        {
            x -= i;
            ans++;
            if (x <= 0)
                break;
        }

        if (x <= 0)
        {
            cout << ans << endl;
            continue;
        }

        for (int i = k - 1; i >= 1; i--)
        {
            x -= i;
            ans++;
            if (x <= 0)
                break;
        }
        cout << ans << endl;
    }
    return 0;
}