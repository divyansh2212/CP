// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class TimeMap
{
public:
    unordered_map<string, map<int, string>> hashSet;

    TimeMap()
    {
        hashSet.clear();
    }

    void set(string key, string value, int timestamp)
    {
        hashSet[key].insert({timestamp, value});
    }

    string get(string key, int timestamp)
    {
        auto it = hashSet[key].upper_bound(timestamp);
        if (it == hashSet[key].begin())
            return "";
        --it;
        auto val = *it;
        return val.second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */