// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

// int f(string &s, int transaction, bool flag, int idx)
// {
//     if (transaction == 0)
//         return 1;
//     if (idx == n)
//         return 0;

//     int take = 0;
//     if (flag && s[idx] == 'T')
//         take = f(s, transaction - 1, false, idx + 1);
//     else if (flag == false && s[idx] == 'M')
//         take = f(s, transaction - 1, true, idx + 1);

//     int notTake = f(s, transaction, flag, idx + 1);

//     return take + notTake;
// }

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

        int ms = 0, ts = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T')
                ts++;
            else
                ms++;
        }

        if (ts != 2 * ms)
            flag = false;

        int curr = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T')
                curr++;
            else
                curr--;
            if (curr < 0)
                flag = false;
        }

        curr = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'T')
                curr++;
            else
                curr--;
            if (curr < 0)
                flag = false;
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}