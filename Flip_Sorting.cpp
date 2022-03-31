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
        vector<pair<int, int>> anspairs;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                ans++;
                anspairs.push_back({i + 1, n - i});
                for (int j = i; j < n; j++)
                {
                    if (s[j] == '1')
                        s[j] = '0';
                    else
                        s[j] = '1';
                }
            }
        }

        cout << ans << endl;
        for (int i = 0; i < anspairs.size(); i++)
            cout << anspairs[i].first << " " << anspairs[i].second << endl;
        }
    return 0;
}