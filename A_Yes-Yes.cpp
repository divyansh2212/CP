// <-------------------- Jai Shree Babosa -------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != 'Y' && s[i] != 'e' && s[i] != 's')
        {
            cout << "NO\n";
            return;
        }
    }

    if (n == 1)
    {
        cout << "YES\n";
        return;
    }
    if (n == 2)
    {
        if (s == "Ye" || s == "es" || s == "sY")
            cout << "YES\n";
        else
            cout << "NO\n";
        return;
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] == 'e')
        {
            if (s[i - 1] == 'Y' && s[i + 1] == 's')
                continue;
            cout << "NO\n";
            return;
        }
        else if (s[i] == 'Y')
        {
            if (s[i - 1] == 's' && s[i + 1] == 'e')
                continue;
            cout << "NO\n";
            return;
        }
        else if (s[i] == 's')
        {
            if (s[i - 1] == 'e' && s[i + 1] == 'Y')
                continue;
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}