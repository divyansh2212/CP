// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int matchPlayersAndTrainers(vector<int> &players, vector<int> &trainers)
    {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());

        int i = players.size() - 1, j = trainers.size() - 1, ans = 0;

        while (i >= 0 && j >= 0)
        {
            if (players[i] <= trainers[j])
                i--, j--, ans++;
            else
                i--;
        }
        return ans;
    }
};