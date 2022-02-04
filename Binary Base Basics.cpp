#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int size = s.length();
        int cnt = 0;
        for (int i = 0; i <= (size - 1) / 2; i++)
        {
            if (s[i] != s[size - 1 - i])
                cnt++;
        }
        k = k - cnt;
        if (k < 0)
            cout << "NO\n";
        else if (k == 0)
            cout << "YES\n";
        else if (n % 2)
            cout << "YES\n";
        else if (n % 2 == 0 && k % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}