// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void flip(string &s, int idx)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (i == idx)
            continue;
        if (s[i] == '0')
            s[i] = '1';
        else
            s[i] = '0';
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        if (k == 0)
        {
            cout << s << endl;
            continue;
        }

        if (k % 2 && s[0] == '1')
        {
            flip(s, 0);
        }
        else if(k % 2 == 0)
        {
            
        }
    }
    return 0;
}