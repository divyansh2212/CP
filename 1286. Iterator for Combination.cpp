// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class CombinationIterator
{
    void f(set<string> &ans, string &curr, string &s, int &n, int idx)
    {
        if (curr.size() == n)
        {
            ans.insert(curr);
            return;
        }

        if (idx == s.length())
            return;

        curr.push_back(s[idx]);
        f(ans, curr, s, n, idx + 1);
        curr.pop_back();
        f(ans, curr, s, n, idx + 1);
    }

public:
    set<string> ans;
    CombinationIterator(string characters, int combinationLength)
    {
        string curr = "";
        f(ans, curr, characters, combinationLength, 0);
    }

    string next()
    {
        auto it = ans.begin();
        string s = *it;
        ans.erase(it);
        return s;
    }

    bool hasNext()
    {
        return ans.size();
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */