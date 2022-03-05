#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n < 4)
        {
            for (int i = 1; i <= n; i++)
                cout << i << " ";
            cout << endl;
        }
        else
        {
            vector<ll> arr(n + 1);
            ll maxm = (2 * n);

            bool flag = false;
            for (ll i = n; i >= 1; i--)
            {
                if (i == n && i % 2)
                {
                    flag = true;
                    continue;
                }
                if (i % 2 == 0)
                {
                    arr[i] = maxm;
                    maxm -= 2;
                }
                else
                    arr[i] = arr[i + 1] / 2;
            }
            if (flag)
                arr[n] = 1;

            for (int i = 1; i < n + 1; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
    return 0;
}