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

        if (n == 1)
            cout << s + s << endl;
        else if (s[0] == s[1])
            cout << s[0] << s[0] << endl;

        else
        {
            string ans = "";
            ans.push_back(s[0]);
            for (int i = 1; i < n; i++)
            {
                if (s[i] <= s[i - 1])
                    ans.push_back(s[i]);
                else
                    break;
            }

            string c = ans;
            reverse(c.begin(), c.end());
            cout << ans + c << endl;
        }
    }
    return 0;
}