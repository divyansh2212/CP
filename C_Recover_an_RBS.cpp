// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF INT_MAX
const int M = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();

    int opening = 0, clsoing = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            opening++;
        else if (s[i] == ')')
            clsoing++;
    }
    opening = (n / 2) - opening;
    clsoing = (n / 2) - clsoing;

    int sum = 0;
    bool flag = false;
    int initial = clsoing;
    for (int i = 0; i < n; i++)
    {
        if (sum < 0)
            flag = true;
        if (s[i] == '(')
            sum++;
        else if (s[i] == ')')
            sum--;
        if (s[i] == '?')
        {
            if (opening > 1)
                opening--, sum++;
            else if (clsoing && initial == clsoing)
                clsoing--, sum--;
            else if (opening == 1)
                opening--, sum++;
            else
                clsoing--, sum--;
        }
    }
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}