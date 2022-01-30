#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int low = 0;
        int high = n - 1;
        while (high - low > 1)
        {
            int mid = (high + low) >> 1;
            int cnt = 0;
            for (int i = mid; i >= 0; i--)
            {
                int now = (cnt + s[i] - '0') % 10;
                if (now != 0)
                    cnt += 10 - now;
            }

            if (cnt <= k)
                low = mid;

            else
                high = mid - 1;
        }
        if (high == 0 && low == 0)
        {
            if (s[0] == '0')
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else
            cout << high + 1 << '\n';
    }
    return 0;
}