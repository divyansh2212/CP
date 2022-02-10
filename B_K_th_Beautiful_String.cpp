#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s(n, 'a');
        set<string> st;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    continue;
                s[i] = 'b', s[j] = 'b';
                st.insert(s);
                s[i] = 'a', s[j] = 'a';
            }
        }

        int i = 1;
        for (auto e : st)
        {
            if (i == k)
                cout << e << endl;
            i++;
        }
    }
    return 0;
}