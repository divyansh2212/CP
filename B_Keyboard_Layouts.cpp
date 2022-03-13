#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s1, s2, text;
    cin >> s1;
    cin >> s2;
    cin >> text;

    map<char, char> m;
    for (int i = 0; i < s1.length(); i++)
    {
        m[s1[i]] = s2[i];
        char c1 = s1[i] - 'a' + 'A';
        char c2 = s2[i] - 'a' + 'A';
        m[c1] = c2;
    }

    for (int i = 0; i < text.length(); i++)
    {
        if (m.count(text[i]))
            cout << m[text[i]];
        else
            cout << text[i];
    }
    cout << endl;

    return 0;
}