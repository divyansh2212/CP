#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, i, j;
        cin >> n >> k;

        if (n % 2 == 0 || k == 1)
        {
            cout << "YES\n";
            for (int i = 1, j = 1; i <= n * k; i += 2, j++)
            {
                cout << i << " ";
                if (k == j)
                {
                    cout << endl;
                    j = 0;
                }
            }
            for (int i = 2, j = 1; i <= n * k; i += 2, j++)
            {
                cout << i << " ";
                if (k == j)
                {
                    cout << endl;
                    j = 0;
                }
            }
        }
        else
            cout << "NO\n";
    }

    return 0;
}