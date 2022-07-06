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
        int n;
        cin >> n;

        string s;
        cin >> s;

        int ans = 0;

        int firstzero = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                firstzero = i;
                break;
            }
        }

        if (firstzero == -1)
        {
            cout << 0 << endl;
            continue;
        }

        int idx = firstzero - 1;
        while (idx >= 0)
        {
            if (s[idx] == '1')
            {
                ans++;
                while (s[idx] == '1' && idx >= 0)
                    idx--;
            }
            else
                idx--;
        }

        cout << ans << endl;
    }
    return 0;
}