#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, m;
        cin >> x >> m;

        long long inventory = 1, target = x, cnt = 0, initialHgt = 0;
        while (m--)
        {
            if (inventory >= target)
            {
                cnt += m + 1;
                break;
            }
            long long reqd = target - initialHgt;
            if (reqd <= inventory)
            {
                inventory -= reqd;
                initialHgt += reqd;
                inventory += initialHgt;
            }
            else if (reqd > inventory)
            {
                initialHgt += inventory;
                inventory = 0;
                inventory += initialHgt;
            }
            if (initialHgt == target)
            {
                cnt++;
                // inventory += initialHgt;
                initialHgt = 0;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}