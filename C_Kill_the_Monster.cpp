#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long hc, dc, hm, dm, k, w, a;
        cin >> hc >> dc;
        cin >> hm >> dm;
        cin >> k >> w >> a;

        double n = ((hm - (k * w) - hc + dm) * 1.0) / ((a - w) / 1.0);
        if(n > 0)
        cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}