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
        string s;
        cin >> s;

        int curr = 0;
        bool flag = true;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'a')
                curr++;
            else
            {
                if (curr == 1)
                    flag = false;
                curr = 0;
            }
        }
        if (curr == 1)
            flag = false;

        curr = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'b')
                curr++;
            else
            {
                if (curr == 1)
                    flag = false;
                curr = 0;
            }
        }
        if (curr == 1)
            flag = false;

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}