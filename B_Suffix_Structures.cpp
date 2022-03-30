// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isSubsequence(string s, string t)
{
    int prev = -1;
    for (int i = 0; i < s.length(); i++)
    {
        bool flag = true;
        for (int j = prev + 1; j < t.length(); j++)
        {
            if (s[i] == t[j])
            {
                prev = j;
                flag = false;
                break;
            }
        }
        if (flag)
            return false;
    }
    return true;
}

int main()
{
    string s, t;
    cin >> s;
    cin >> t;

    if (s.length() < t.length())
    {
        cout << "need tree";
        return 0;
    }

    vector<int> hshs(26, 0), hsht(26, 0);
    for (int i = 0; i < s.length(); i++)
        hshs[s[i] - 'a']++;

    for (int i = 0; i < t.length(); i++)
        hsht[t[i] - 'a']++;

    if (s.length() == t.length())
    {
        bool flag = true;
        for (int i = 0; i < 26; i++)
        {
            if (hshs[i] != hsht[i])
                flag = false;
        }

        if (flag)
            cout << "array";
        else
            cout << "need tree";
        return 0;
    }

    if (isSubsequence(t, s))
        cout << "automaton";

    else
    {
        bool flag = true;
        for (int i = 0; i < 26; i++)
        {
            if (hshs[i] < hsht[i])
                flag = false;
        }

        if (flag)
            cout << "both";

        else
            cout << "need tree";
    }

    return 0;
}