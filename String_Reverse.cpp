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

        string reqd = s;
        reverse(reqd.begin(), reqd.end());

        int i = 0, ans = 0;
        int n = s.length();
        while (i < n)
        {
            if (s[i] != reqd[i])
                ans++;
            i++;
        }
        if (ans == n)
            cout << n - 1 << endl;
        else
            cout << ans + 1 << endl;
    }
    return 0;
}