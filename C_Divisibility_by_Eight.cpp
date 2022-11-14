// <-------------------- Jai Shree Babosa -------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0' || s[i] == '8')
        {
            cout << "YES\n"
                 << s[i];
            return;
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            string num = "";
            num.push_back(s[i]);
            num.push_back(s[j]);
            int n = stoi(num);
            if (n % 8 == 0)
            {
                cout << "YES\n"
                     << num;
                return;
            }
        }
    }

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                string num = "";
                num.push_back(s[i]);
                num.push_back(s[j]);
                num.push_back(s[k]);
                int n = stoi(num);
                if (n % 8 == 0)
                {
                    cout << "YES\n"
                         << num;
                    return;
                }
            }
        }
    }

    cout << "NO\n";
}
int main()
{
    solve();
    return 0;
}