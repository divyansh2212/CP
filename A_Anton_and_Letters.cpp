// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;

    vector<int> hsh(26, 0);

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ' || s[i] == '{' || s[i] == '}' || s[i] == ',')
            continue;
        hsh[s[i] - 'a']++;
    }

    int ans = 0;
    for (int i = 0; i < 26; i++)
        if (hsh[i])
            ans++;

    cout << ans;

    return 0;
}