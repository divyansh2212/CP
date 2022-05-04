// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    string removeDigit(string number, char digit)
    {

        string ans = "";

        vector<int> hsh(10, 0);

        for (int i = 0; i < number.length(); i++)
            hsh[number[i] - '0']++;

        if (hsh[digit - '0'] == 0)
            return number;

        for (int i = 0; i < number.length(); i++)
        {
            if (number[i] == digit)
            {
                string curr = number.substr(0, i) + number.substr(i + 1);
                ans = max(ans, curr);
            }
        }
        return ans;
    }
};