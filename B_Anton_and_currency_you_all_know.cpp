#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;
    int n = s.length();

    string ans = "0";

    for (int i = 0; i < n - 1; i++)
    {
        if (((s[i] - '0') & 1) == 0 && s[n - 1] > s[i])
        {
            swap(s[i], s[n - 1]);
            ans = s;
            break;
        }
    }

    if (ans != "0")
        cout << ans;
    else
    {
        for (int i = n - 2; i >= 0; i--)
        {
            if (((s[i] - '0') & 1) == 0)
            {
                swap(s[i], s[n - 1]);
                ans = s;
                break;
            }
        }
        if (ans != "0")
            cout << ans;
        else
            cout << -1 << endl;
    }

    return 0;
}