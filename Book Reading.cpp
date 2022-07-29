// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

int bookReading(vector<int> &l, vector<int> &r)
{
    vector<pair<int, int>> pairs;
    for (int i = 0; i < l.size(); i++)
        pairs.push_back({l[i], r[i]});

    sort(pairs.begin(), pairs.end());

    int alice = 0, bob = 0;

    for (int i = 0; i < l.size(); i++)
    {
        if (pairs[i].first > alice && pairs[i].first > bob)
        {
            if (alice < bob)
                alice = pairs[i].second;
            else
                bob = pairs[i].second;
        }
        else if (pairs[i].first > alice)
            alice = pairs[i].second;
        else if (pairs[i].first > bob)
            bob = pairs[i].second;
        else
            return 0;
    }
    return 1;
}