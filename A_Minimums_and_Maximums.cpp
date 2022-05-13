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
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;

        vector<int> hsh1(51, 0), hsh2(51, 0);
        int ans = -1;

        for (int i = l1; i < r1 + 1; i++)
            hsh1[i] = 1;

        for (int i = l2; i < r2 + 1; i++)
            hsh2[i] = 1;

        for (int i = 0; i < 51; i++)
        {
            if (hsh1[i] && hsh2[i])
            {
                ans = i;
                break;
            }
        }

        if (ans == -1)
            ans = l1 + l2;

        cout << ans << endl;
    }
    return 0;
}