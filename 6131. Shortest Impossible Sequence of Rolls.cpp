// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int shortestSequence(vector<int> &rolls, int k)
    {
        int ans = 1;

        set<int> st;
        for (int i = 0; i < rolls.size(); i++)
        {
            st.insert(rolls[i]);
            if (st.size() == k)
            {
                ans++;
                st.clear();
            }
        }

        return ans;
    }
};