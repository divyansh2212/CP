
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    bool canChange(string start, string target)
    {
        string s, t;
        for (int i = 0; i < start.length(); i++)
        {
            if (start[i] != '_')
                s.push_back(start[i]);
            if (target[i] != '_')
                t.push_back(target[i]);
        }

        if (s != t)
            return false;

        vector<int> hsh[2];
        for (int i = 0; i < target.length(); i++)
        {
            if (target[i] == 'L')
                hsh[0].push_back(i);
            else if (target[i] == 'R')
                hsh[1].push_back(i);
        }

        int currL = 0, currR = 0;

        for (int i = 0; i < start.length(); i++)
        {
            if (start[i] == '_')
                continue;
            if (start[i] == 'L')
            {
                if (hsh[0][currL] > i)
                    return false;
                currL++;
            }
            else
            {
                if (hsh[1][currR] < i)
                    return false;
                currR++;
            }
        }

        return true;
    }
};