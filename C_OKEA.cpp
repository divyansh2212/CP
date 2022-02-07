#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k == 1)
        {
            cout << "YES\n";
            for (int i = 1; i <= n; i++)
                cout << i << endl;
        }
        else if (n % 2)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            for (int i = 1; i <= n * k; i += 2)
            {
                int cnt = 0;
                while (cnt < k)
                {
                    cout << i << " ";
                    cnt++;
                    i += 2;
                }
                i -= 2;
                cout << endl;
            }
            for (int i = 2; i <= n * k; i += 2)
            {
                int cnt = 0;
                while (cnt < k)
                {
                    cout << i << " ";
                    cnt++;
                    i += 2;
                }
                i -= 2;
                cout << endl;
            }
        }
    }

    return 0;
}