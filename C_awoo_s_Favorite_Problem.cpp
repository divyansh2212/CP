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

        string s, t;
        cin >> s;
        cin >> t;

        bool flag = true;

        int a = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
                a++;
            else if (s[i] == 'c')
                c++;
            if (t[i] == 'a')
                a--;
            else if (t[i] == 'c')
                c--;
        }

        if (a != 0 || c != 0)
        {
            cout << "NO\n";
            continue;
            ;
        }

        string s2 = "", t2 = "";
        for (int i = 0; i < n; i++)
        {
            if (s[i] != 'b')
                s2.push_back(s[i]);
            if (t[i] != 'b')
                t2.push_back(t[i]);
        }

        if (s2 != t2)
            flag = false;

        vector<int> sa, ta, sc, tc;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
                sa.push_back(i);
            else if (s[i] == 'c')
                sc.push_back(i);
            if (t[i] == 'a')
                ta.push_back(i);
            else if (t[i] == 'c')
                tc.push_back(i);
        }

        for (int i = 0; i < sa.size(); i++)
            if (ta[i] < sa[i])
                flag = false;

        for (int i = 0; i < sc.size(); i++)
            if (tc[i] > sc[i])
                flag = false;

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}