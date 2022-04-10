// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int calPoints(vector<string> &ops)
    {
        vector<int> scores;

        for (int i = 0; i < ops.size(); i++)
        {
            if (ops[i] == "D")
            {
                int to_add = 2 * scores[scores.size() - 1];
                scores.push_back(to_add);
            }
            else if (ops[i] == "C")
                scores.pop_back();
            else if (ops[i] == "+")
            {
                int to_add = scores[scores.size() - 1] + scores[scores.size() - 2];
                scores.push_back(to_add);
            }
            else
            {
                int to_add = stoi(ops[i]);
                scores.push_back(to_add);
            }
        }

        return accumulate(scores.begin(), scores.end(), 0);
    }
};