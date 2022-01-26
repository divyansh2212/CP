#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s.length() == 0)
        cout << s;
    else
    {
        if (s[0] >= 97 && s[0] <= 122)
        {
            int word = s[0] - 'a';
            s[0] = word + 'A';
        }
        cout << s;
    }
    return 0;
}