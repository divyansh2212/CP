#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;

    int k;
    cin >> k;

    map<char, int> m;
    int mx = -1;
    char c = '0';
    for (int i = 0; i < 26; i++)
    {
        int x;
        cin >> x;
        if (mx < x)
        {
            mx = max(mx, x);
            c = i + 'a';
        }
        m[i + 'a'] = x;
    }

    while (k--)
        s.push_back(c);

    ll ans = 0;

    for (int i = 0; i < s.length(); i++)
        ans += ((i + 1) * m[s[i]]);
    cout << ans;

    return 0;
}