// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;

    string changedStr = "";
    if (s.length())
        changedStr.push_back(s[0]);
    if (s.length() > 1)
        changedStr.push_back(s[1]);

    for (int i = 2; i < s.length(); i++)
    {
        if (s[i - 1] == s[i - 2] && s[i - 2] == s[i])
            continue;
        else
            changedStr.push_back(s[i]);
    }

    s = changedStr;
    vector<bool> hash(s.length(), true);

    for (int i = 3; i < s.length(); i++)
    {
        if (s[i] == s[i - 1] && s[i - 2] == s[i - 3])
        {
            if (hash[i - 2] == false)
                continue;
            else
                hash[i] = false;
        }
    }

    for (int i = 0; i < s.length(); i++)
        if (hash[i])
            cout << s[i];

    return 0;
}