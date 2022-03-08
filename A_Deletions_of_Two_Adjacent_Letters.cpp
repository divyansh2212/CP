#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, c;
        cin >> s;
        cin >> c;

        vector<int> hsh(26, -1);
        for (int i = 0; i < s.length(); i++)
        {
            if (hsh[s[i] - 'a'] % 2 == 0)
                continue;
            hsh[s[i] - 'a'] = i;
        }

        char ch = c[0];
        if (hsh[ch - 'a'] % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}