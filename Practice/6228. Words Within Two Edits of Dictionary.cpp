// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    vector<string> twoEditWords(vector<string> &queries, vector<string> &dictionary)
    {
        vector<string> ans;
        for (int i = 0; i < queries.size(); i++)
        {
            for (int j = 0; j < dictionary.size(); j++)
            {
                string s = queries[i], t = dictionary[j];
                int cnt = 0;
                for (int k = 0; k < s.length(); k++)
                    if (s[k] != t[k])
                        cnt++;

                if (cnt < 3)
                {
                    ans.push_back(queries[i]);
                    break;
                }
            }
        }
        return ans;
    }
};