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
        int n = s.length();
        string ans = "";
        for (int i = n - 1; i >= 1; i--)
        {
            if (s[i] - '0' + s[i - 1] - '0' >= 10)
            {
                s[i] = s[i - 1] + s[i] - '0' - 10;
                s[i - 1] = '1';
                ans = s;
                break;
            }
        }
        if (ans == "")
        {
            reverse(s.begin(), s.end());
            n = s.length();
            int x = s[n - 1] - '0';
            s.pop_back();
            n = s.length();
            int y = s[n - 1] - '0';
            s.pop_back();
            char c = x + y + '0';
            s.push_back(c);
            reverse(s.begin(), s.end());
            ans = s;
        }
        cout << ans << endl;
    }
    return 0;
}