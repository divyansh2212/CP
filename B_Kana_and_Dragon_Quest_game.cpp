#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n, m;
        cin >> x >> n >> m;
        while (x > 0 && (n > 0 || m > 0))
        {
            if (x > 20)
            {
                if (n)
                {
                    x = (x / 2) + 10;
                    n--;
                }

                else if (m)
                {
                    x = x - 10;
                    m--;
                }
            }
            else if (x > 0)
            {
                if (m)
                {
                    x = x - 10;
                    m--;
                }

                else if (n)
                {
                    x = (x / 2) + 10;
                    n--;
                }
            }
        }
        if (x < 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}