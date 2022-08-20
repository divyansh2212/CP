// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    string shiftingLetters(string s, vector<vector<int>> &shifts)
    {
        int n = s.length();
        vector<int> freq(n + 1, 0);

        for (int i = 0; i < shifts.size(); i++)
        {
            if (shifts[i][2])
                freq[shifts[i][0]]++, freq[shifts[i][1] + 1]--;
            else
                freq[shifts[i][0]]--, freq[shifts[i][1] + 1]++;
        }

        for (int i = 1; i < n; i++)
            freq[i] += freq[i - 1];

        for (int i = 0; i < n; i++)
        {
            freq[i] = (freq[i] % 26);
            int curr = s[i] - 'a' + freq[i];
            if (curr < 0)
                curr = curr + 26;
            else if (curr >= 26)
                curr -= 26;
            s[i] = s[i] + curr;
        }

        return s;
    }
};