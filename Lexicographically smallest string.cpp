// <--------------------------Jai Shree Babosa-------------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{

public:
    string lexicographicallySmallest(string s, int k)
    {
        int n = s.length();

        if ((n & (n - 1)) == 0)
            k /= 2;
        else
            k *= 2;

        if (k >= n)
            return "-1";

        stack<char> st;

        int removed = 0;
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && removed < k && st.top() > s[i])
            {
                st.pop();
                removed++;
            }
            st.push(s[i]);
        }

        while (removed < k)
        {
            removed++;
            st.pop();
        }

        string ans(n - k, ' ');
        for (int i = n - k - 1; i >= 0; i--)
        {
            ans[i] = st.top();
            st.pop();
        }

        return ans;
    }
};