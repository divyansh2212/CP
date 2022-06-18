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
        int n;
        cin >> n;

        string s;
        cin >> s;

        set<string> st;
        vector<int> hsh(26, 0);
        string temp = "";
        for (int i = 0; i < n; i++)
        {
            hsh[s[i] - 'a']++;
            if (i + 1 < n)
            {
                temp = "";
                temp += s[i];
                temp += s[i + 1];
                st.insert(temp);
            }
            if (i + 2 < n)
            {
                temp = "";
                temp += s[i];
                temp += s[i + 1];
                temp += s[i + 2];
                st.insert(temp);
            }
        }

        string ans = "";
        for (int i = 0; i < 26; i++)
        {
            if (hsh[i] == 0)
            {
                ans += (char)(i + 'a');
                break;
            }
        }

        if (ans.size())
        {
            cout << ans << endl;
            continue;
        }

        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                temp = "";
                temp += (char)(i + 'a');
                temp += (char)(j + 'a');
                if (st.find(temp) == st.end())
                {
                    ans = temp;
                    break;
                }
            }
            if (ans.size())
                break;
        }

        if (ans.size())
        {
            cout << ans << endl;
            continue;
        }

        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                for (int k = 0; k < 26; k++)
                {
                    temp = "";
                    temp += (char)(i + 'a');
                    temp += (char)(j + 'a');
                    temp += (char)(k + 'a');
                    if (st.find(temp) == st.end())
                    {
                        ans = temp;
                        break;
                    }
                }
                if (ans.size())
                    break;
            }
            if (ans.size())
                break;
        }
        cout << ans << endl;
    }
    return 0;
}