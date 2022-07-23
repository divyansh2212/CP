// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    string bestHand(vector<int> &ranks, vector<char> &suits)
    {
        vector<int> hsh(26, 0);
        bool flag = false;
        for (int i = 0; i < suits.size(); i++)
        {
            hsh[suits[i] - 'a']++;
            if (hsh[suits[i] - 'a'] == 5)
                flag = true;
        }

        if (flag)
            return "Flush";

        // hsh.clear();
        vector<int> hshi(26, 0);
        bool three = false, pair = false;
        for (int i = 0; i < ranks.size(); i++)
        {
            hshi[ranks[i]]++;
            if (hshi[ranks[i]] == 3)
                three = true;
            if (hshi[ranks[i]] == 2)
                pair = true;
        }

        if (three)
            return "Three of a Kind";
        if (pair)
            return "Pair";
        return "High Card";
    }
};