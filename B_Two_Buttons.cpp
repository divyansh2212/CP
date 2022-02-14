#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int ans = 0;
    if (n == m)
        cout << 0;
    else if (m < n)
        cout << n - m << endl;
    else
    {
        while (m > n)
        {
            if (m % 2)
            {
                m++;
                ans++;
            }
            m = m / 2;
            ans++;
        }
        cout << ans + n - m << endl;
    }
    return 0;
}