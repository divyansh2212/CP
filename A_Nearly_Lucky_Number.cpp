// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;

    string s = to_string(n);

    ll freq = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == '4' || s[i] == '7')
            freq++;

    s = to_string(freq);

    bool flag = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '4' || s[i] == '7')
            flag = true;
        else
            flag = false;
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}