// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;

    bool isAB = false;
    int i = 0;
    while (i < s.length() - 1)
    {
        if (isAB == false)
        {
            if (s[i] == 'A' && s[i + 1] == 'B')
                isAB = true, i += 2;
            else
                i++;
        }
        else
        {
            if (s[i] == 'B' && s[i + 1] == 'A')
            {
                cout << "YES";
                return;
            }
            else
                i++;
        }
    }

    bool isBA = false;
    i = 0;
    while (i < s.length() - 1)
    {
        if (isBA == false)
        {
            if (s[i] == 'B' && s[i + 1] == 'A')
                isBA = true, i += 2;
            else
                i++;
        }
        else
        {
            if (s[i] == 'A' && s[i + 1] == 'B')
            {
                cout << "YES";
                return;
            }
            else
                i++;
        }
    }
    cout << "NO";
}
int main()
{
    solve();
    return 0;
}