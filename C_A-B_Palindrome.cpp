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

        string s;
        cin >> s;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
                a--;
            if (s[i] == '1')
                b--;
        }

        int i = -1, j = s.length();

        bool flag = true;
        while (i <= j)
        {
            i++, j--;
            if (s[i] == s[j] && s[i] != '?')
                continue;

            if (s[i] == '1')
            {
                if (s[j] == '?' && b > 0)
                {
                    s[j] = '1';
                    b--;
                }
                else
                    flag = false;
            }
            else if (s[i] == '0')
            {
                if (s[j] == '?' && a > 0)
                {
                    s[j] = '0';
                    a--;
                }
                else
                    flag = false;
            }
            else if (s[j] == '1')
            {
                if (s[i] == '?' && b > 0)
                {
                    s[i] = '1';
                    b--;
                }
                else
                    flag = false;
            }
            else if (s[j] == '0')
            {
                if (s[i] == '?' && a > 0)
                {
                    s[i] = '0';
                    a--;
                }
                else
                    flag = false;
            }
        }

        if (!flag || a < 0 || b < 0)
        {
            cout << -1 << endl;
            continue;
        }

        i = -1, j = s.length();
        while (i <= j)
        {
            i++, j--;
            if (s[i] == '?' && s[j] == '?')
            {
                if (a > 0 || b > 0)
                {
                    if (i == j)
                    {
                        if ((a % 2) || (b % 2))
                        {
                            if (a % 2)
                            {
                                s[i] = '0';
                                a--;
                            }
                            else
                            {
                                s[i] = '1';
                                b--;
                            }
                        }
                        else
                            flag = false;
                    }
                    else
                    {
                        if ((a > 1) || (b > 1))
                        {
                            if (a > 1)
                            {
                                s[i] = '0';
                                a -= 2;
                                s[j] = '0';
                            }
                            else
                            {
                                s[i] = '1';
                                b -= 2;
                                s[j] = '1';
                            }
                        }
                        else
                            flag = false;
                    }
                }
                else
                    flag = false;
            }
        }
        if (flag == false || a < 0 || b < 0)
            cout << -1 << endl;
        else
            cout << s << endl;
    }
    return 0;
}