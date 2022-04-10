// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool f(string &s, string &r, int idx1, int idx2)
{
    if (idx2 < 0)
        return true;

    if (idx1 < 0)
        return false;

    if (s[idx1] == r[idx2])
        return f(s, r, idx1 - 1, idx2 - 1);

    else
        return f(s, r, idx1 - 1, idx2);
}

int main()
{
    string s;
    cin >> s;

    string r = "hello";

    if (f(s, r, s.length() - 1, 4))
        cout << "YES";

    else
        cout << "NO";

    return 0;
}