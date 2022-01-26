#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int hsh[s.length() + 1] = {0};
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == s[i + 1])
            hsh[i + 1]++;

        hsh[i + 1] += hsh[i];
    }

    int m;
    cin >> m;
    while (m--)
    {\
        int x, y;
        cin >> x >> y;
        int ans = hsh[y - 1] - hsh[x - 1];
        cout << ans << endl;
    }

    return 0;
}