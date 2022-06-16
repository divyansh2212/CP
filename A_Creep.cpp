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
        int a, b;
        cin >> a >> b;

        string ans = "";

        if (a > b)
        {
            while (b > 0)
            {
                ans.push_back('0');
                ans.push_back('1');
                a--, b--;
            }
            while (a)
            {
                ans.push_back('0');
                a--;
            }
        }
        else if (a < b)
        {
            while (a > 0)
            {
                ans.push_back('1');
                ans.push_back('0');
                a--, b--;
            }
            while (b)
            {
                ans.push_back('1');
                b--;
            }
        }
        else
        {
            while (a > 0)
            {
                ans.push_back('0');
                ans.push_back('1');
                a--, b--;
            }
        }

        cout << ans << endl;
    }
    return 0;
}