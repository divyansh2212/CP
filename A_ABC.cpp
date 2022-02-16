#include <bits/stdc++.h>
using namespace std;

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

        if (n == 1)
        {
            cout << "YES\n";
            continue;
        }
        vector<int> hsh(2, 0);
        for (int i = 0; i < n; i++)
            hsh[s[i] - '0']++;
        if (hsh[0] == 1 && hsh[1] == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}