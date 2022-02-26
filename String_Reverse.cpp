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
        string r = s;
        reverse(r.begin(), r.end());

        int i = 0, j = 0, ans = 0;
        while (i < s.length())
        {
            if (r[j] == s[i])
                i++, j++;

            else
                ans++, i++;
        }
        cout << ans << endl;
    }
    return 0;
}