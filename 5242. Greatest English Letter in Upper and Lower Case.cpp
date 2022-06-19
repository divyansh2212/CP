// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    string greatestLetter(string s)
    {
        vector<int> hsh(26, 0);
        sort(s.begin(), s.end());
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                hsh[s[i] - 'A'] = 1;
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                if (hsh[s[i] - 'a'])
                    hsh[s[i] - 'a'] = 2;
            }
        }

        string ans = "";
        for (int i = 0; i < 26; i++)
        {
            string temp = "";
            if (hsh[i] >= 2)
            {
                temp += (char)(i + 'A');
                ans = temp;
            }
        }

        return ans;
    }
};