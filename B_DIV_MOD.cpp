#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, a;
        cin >> l >> r >> a;

        int r_limit = (r / a) * a;
        int ans = 0;

        ans = max(ans, (r / a) + (r % a));
        if (l <= r_limit - 1)
            ans = max(ans, ((r_limit - 1) / a) + ((r_limit - 1) % a));

        cout << ans << endl;
    }
    return 0;
}