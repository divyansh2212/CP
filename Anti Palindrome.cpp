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

        sort(s.begin(), s.end());
        reverse(s.begin(), s.begin() + n / 2);
        bool flag = true;
        for (int i = 0; i <= n / 2; i++)
        {
            if (s[i] == s[n - 1 - i])
                flag = false;
        }
        if (flag)
        {
            cout << "YES\n";
            cout << s << endl;
        }
        else
            cout << "NO\n";
    }

    return 0;
}