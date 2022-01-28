#include <bits/stdc++.h>
using namespace std;
const int N = 1e9 + 10;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k >= n)
            cout << 1 << endl;
        else
        {
            int ans = INT_MAX;
            for (int i = 1; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    int divi1 = i;
                    int divi2 = n / i;
                    if (divi1 <= k)
                        ans = min(ans, divi2);

                    if (divi2 <= k)
                        ans = min(ans, divi1);
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}