// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n;

    string s;
    cin >> s;

    int q;
    cin >> q;
    while (q--)
    {
        cin >> m;
        char c;
        cin >> c;

        int ans = m, i = 0, j = 0, real = 0, fake = 0;

        while (j < n)
        {
            if (s[j] == c)
                real++;
            else
                fake++;
            if (fake <= m)
                ans = max(ans, j - i + 1);
            else
            {
                while (fake > m)
                {
                    if (s[i] != c)
                        fake--;
                    i++;
                }
            }
            j++;
        }
        cout << ans << "\n";
    }
}
int main()
{
    solve();
    return 0;
}