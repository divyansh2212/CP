    // Jai Shree Babosa!

    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long

    class Solution
    {
    public:
        bool strongPasswordCheckerII(string s)
        {
            if(s.length() < 8)
            return false;
            bool flag1 = false, flag2 = false, flag3 = false, flag4 = false;

            for (int i = 1; i < s.length(); i++)
            {
                if (s[i] == s[i - 1])
                    return false;
            }

            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] >= 'a' && s[i] <= 'z')
                    flag1 = true;
                if (s[i] >= 'A' && s[i] <= 'Z')
                    flag2 = true;
                if (s[i] >= '0' && s[i] <= '9')
                    flag3 = true;
                if (s[i] == '!' || s[i] == '@' || s[i] == '#' || s[i] == '$' || s[i] == '%' || s[i] == '^' || s[i] == '&' || s[i] == '*' || s[i] == '(' || s[i] == ')' || s[i] == '-' || s[i] == '+')
                    flag4 = true;
            }

            if (flag1 && flag2 && flag3 && flag4)
                return true;
            return false;
        }
    };