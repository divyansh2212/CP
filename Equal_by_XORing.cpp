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
        ll a, b, n;
        cin >> a >> b >> n;

        if (a == b)
            cout << 0 << endl;

        else if ((a ^ b) < n)
            cout << 1 << endl;

        else
        {
            bool flag = true;
            ll cnt = 1;
            ll num = (a ^ b);
            ll curr = 0;
            for (int i = 0; i < 32; i++)
            {
                if (num & (1 << i))
                {
                    if ((1 << i) >= n)
                        flag = false;
                    curr += (1 << i);
                    if (curr < n)
                        continue;
                    else
                    {
                        curr = 0;
                        cnt++;
                    }
                }
            }

            if (flag == false)
                cout << -1 << endl;
            else
                cout << cnt << endl;
        }
    }
    return 0;
}