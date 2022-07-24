#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct cmp
{
    bool operator()(pair<int, string> &a, pair<int, string> &b) const
    {
        if (a.first != b.first)
            return a.first > b.first;
        return a.second < b.second;
    }
};

class FoodRatings
{
    // cuisine
    unordered_map<string, set<pair<int, string>, cmp>> mp;

    // food
    unordered_map<string, pair<string, int>> mp2;

public:
    FoodRatings(vector<string> &foods, vector<string> &cuisines, vector<int> &ratings)
    {
        int n = foods.size();
        for (int i = 0; i < n; i++)
        {
            mp[cuisines[i]].insert({ratings[i], foods[i]});
            mp2[foods[i]] = {cuisines[i], ratings[i]};
        }
    }

    void changeRating(string food, int newRating)
    {
        string cusine = mp2[food].first;
        int oldRating = mp2[food].second;
        mp2[food] = {cusine, newRating};

        mp[cusine].erase({oldRating, food});
        mp[cusine].insert({newRating, food});
    }

    string highestRated(string cuisine)
    {
        return (*mp[cuisine].begin()).second;
    }
};