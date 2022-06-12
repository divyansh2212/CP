// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool f(string s, int idx, string &t, vector<int> &dp)
{
    if (s == t)
        return true;
    if (idx >= s.length())
        return false;

    if (dp[idx] != -1)
        return dp[idx];

    bool flag1 = false, flag2 = false;

    // not change
    flag1 = f(s, idx + 1, t, dp);

    // change
    if (idx + 1 < s.length())
    {
        if (s[idx] == 'a' && s[idx + 1] == 'b')
        {
            swap(s[idx], s[idx + 1]);
            flag2 = f(s, idx + 1, t, dp);
            swap(s[idx], s[idx + 1]);
        }
        if (s[idx] == 'b' && s[idx + 1] == 'c')
        {
            swap(s[idx], s[idx + 1]);
            flag2 = f(s, idx + 1, t, dp);
            swap(s[idx], s[idx + 1]);
        }
    }

    return dp[idx] = (flag1 | flag2);
}

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

        if (s == t)
        {
            cout << "YES\n";
            continue;
        }

        int a = 0, b = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
                a++;
            else if (s[i] == 'b')
                b++;
            else if (s[i] == 'c')
                c++;
            if (t[i] == 'a')
                a--;
            else if (t[i] == 'b')
                b--;
            else if (t[i] == 'c')
                c--;
        }

        if (a != 0 || b != 0 || c != 0)
        {
            cout << "NO\n";
            continue;
        }

        // vector<int> dp(n, -1);
        bool flag = true;

        int i = n - 1;
        while (i >= 0 && s[i] == t[i])
        {
            s.pop_back();
            t.pop_back();
            i--;
        }

        int abs = 0, bas = 0;
        for (i = 0; i < n; i++)
        {
            if (s[i] == 'a')
            {
                while (i < n && s[i] == 'a')
                    i++;
                if (i < n && s[i] == 'b')
                    abs++;
            }
        }
        for (i = 0; i < n; i++)
        {
            if (t[i] == 'b')
            {
                while (i < n && t[i] == 'b')
                    i++;
                if (i < n && t[i] == 'a')
                    bas++;
            }
        }

        int bcs = 0, cbs = 0;
        for (i = 0; i < n; i++)
        {
            if (s[i] == 'b')
            {
                while (i < n && s[i] == 'b')
                    i++;
                if (i < n && s[i] == 'c')
                    bcs++;
            }
        }
        for (i = 0; i < n; i++)
        {
            if (t[i] == 'c')
            {
                while (i < n && t[i] == 'c')
                    i++;
                if (i < n && t[i] == 'b')
                    cbs++;
            }
        }

        if (bcs != cbs || bas != abs)
            flag = false;

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}