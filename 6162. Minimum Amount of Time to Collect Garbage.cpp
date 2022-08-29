// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int garbageCollection(vector<string> &garbage, vector<int> &travel)
    {
        int lastPaper = -1, lastMetal = -1, lastGlass = -1, totalTime = 0;
        int n = garbage.size();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < garbage[i].length(); j++)
            {
                if (garbage[i][j] == 'G')
                    lastGlass = i;
                else if (garbage[i][j] == 'M')
                    lastMetal = i;
                else if (garbage[i][j] == 'P')
                    lastPaper = i;
            }
        }

        // For paper
        for (int i = 0; i <= lastPaper; i++)
        {
            if (i > 0)
                totalTime += travel[i - 1];
            for (int j = 0; j < garbage[i].length(); j++)
                if (garbage[i][j] == 'P')
                    totalTime++;
        }

        // For glass
        for (int i = 0; i <= lastGlass; i++)
        {
            if (i > 0)
                totalTime += travel[i - 1];
            for (int j = 0; j < garbage[i].length(); j++)
                if (garbage[i][j] == 'G')
                    totalTime++;
        }

        // For metal
        for (int i = 0; i <= lastMetal; i++)
        {
            if (i > 0)
                totalTime += travel[i - 1];
            for (int j = 0; j < garbage[i].length(); j++)
                if (garbage[i][j] == 'M')
                    totalTime++;
        }

        return totalTime;
    }
};