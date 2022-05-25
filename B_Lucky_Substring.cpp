// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;

    int fours = 0, sevens = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '4')
            fours++;
        else if(s[i] == '7')
            sevens++;
    }

    if (fours >= sevens && fours != 0)
        cout << 4;
    else if (sevens)
        cout << 7;
    else
        cout << -1;

    return 0;
}