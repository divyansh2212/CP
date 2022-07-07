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
        int n, k;
        cin >> n >> k;

        vector<ll> h(n);
        for (int i = 0; i < n; i++)
            cin >> h[i];

        int ans = -1;
        bool flag = false;
        for (int b = 0; b < k; b++)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (h[i] < h[i + 1])
                {
                    h[i]++;
                    if (b == k - 1)
                        ans = i + 1;
                    break;
                }
                else if (i == n - 2)
                    flag = true;
            }
            if (flag)
                break;
        }
        cout << ans << endl;
    }
    return 0;
}