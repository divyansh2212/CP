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

        int i = 0, j = n - 1, cnt = 0;
        char ignored = '.';
        bool flag = true;

        while (i <= j)
        {
            if (s[i] == s[j])
                i++, j--;
            else if (ignored == '.')
            {
                ignored = s[i];
                i++, cnt++;
            }
            else if (s[i] == ignored)
                i++, cnt++;
            else if (s[j] == ignored)
                j--, cnt++;
            else
            {
                flag = false;
                break;
            }
        }

        int ans = -1;
        if (flag)
            ans = cnt;

        i = 0, j = n - 1, cnt = 0;
        ignored = '.';
        flag = true;

        while (i <= j)
        {
            if (s[i] == s[j])
                i++, j--;
            else if (ignored == '.')
            {
                ignored = s[j];
                j--, cnt++;
            }
            else if (s[i] == ignored)
                i++, cnt++;
            else if (s[j] == ignored)
                j--, cnt++;
            else
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            if (ans == -1)
                ans = cnt;
            else
                ans = min(ans, cnt);
        }

        cout << ans << endl;
    }
    return 0;
}