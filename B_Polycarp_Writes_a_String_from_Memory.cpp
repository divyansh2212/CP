// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int ans = 0;

        unordered_set<char> st;

        for (int i = 0; i < s.length(); i++)
        {
            st.insert(s[i]);
            if (st.size() == 4)
            {
                ans++;
                st.clear();
                st.insert(s[i]);
            }
        }
        if (st.size())
            ans++;

        cout << ans << endl;
    }
    return 0;
}