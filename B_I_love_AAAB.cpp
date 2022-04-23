
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
        string s2;
        cin >> s2;

        bool flag = true;

        int hshA = 0, hshB = 0;
        if (s2[0] == 'A')
            hshA++;
        else
            flag = false;
        if (s2[s2.length() - 1] == 'A')
            flag = false;

        for (int i = 1; i < s2.length(); i++)
        {
            if (s2[i] == 'A')
                hshA++;
            else
                hshB++;
            if (hshB > hshA)
                flag = false;
        }

        if (hshA == 0 || hshB == 0 || hshB > hshA)
            flag = false;

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}