// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        if (s == t)
            return true;

        stack<char> st;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '#' && st.size())
                st.pop();
            else if (s[i] != '#')
                st.push(s[i]);
        }

        stack<char> st2;
        for (int i = 0; i < t.length(); i++)
        {
            if (t[i] == '#' && st2.size())
                st2.pop();
            else if (t[i] != '#')
                st2.push(t[i]);
        }

        return st == st2;
    }
};