#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        unordered_map<char, int> m;
        for (int i = 0; i < s.length(); i++)
            m[s[i]] = i;

        if (m['R'] < m['r'] || m['G'] < m['g'] || m['B'] < m['b'])
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}