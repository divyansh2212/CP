#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool flag = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
            flag = true;
    }
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}