#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> mp;
    for (int i = 0; i < m; i++)
    {
        string x, y;
        cin >> x >> y;

        if (x.length() <= y.length())
            mp[y] = x, mp[x] = x;
        else
            mp[y] = y, mp[x] = y;
    }
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ans += mp[s] + " ";
    }
    // ans.pop_back();
    cout << ans;
    return 0;
}