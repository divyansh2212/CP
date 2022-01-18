#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int hsh[26] = {0};
    for (int i = 0; i < s.length(); i++)
        hsh[s[i] - 'a']++;
    int nos = 0;
    for (int i = 0; i < 26; i++)
    {
        if (hsh[i])
            nos++;
    }
    if (nos & 1)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
    return 0;
}