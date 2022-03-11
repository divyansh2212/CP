#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int f(int idx, string s)
    {
        if (idx == 0)
            return 1;
        int take_single = 1 + f(idx - 1, s);
        int take_double = 0;
        string n = "";
        n.push_back(s[idx - 1]), n.push_back(s[idx]);
        int num = stoi(n);
        if (num <= 26 && s[idx - 1] != '0')
        {
            take_double = 1;
            if (idx - 2 >= 0)
                take_double += f(idx - 2, s);
        }

        return take_double + take_single;
    }

    int numDecodings(string s)
    {
        int n = s.length();
        if (s[0] == '0')
            return 0;
        return f(n - 1, s);
    }
};