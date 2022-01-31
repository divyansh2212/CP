#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.length() == 1)
            cout << 0 << endl;
        else
        {
            vector<int> hsh(2, 0);
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == '0')
                    hsh[0]++;
                else
                    hsh[1]++;
            }
            if (hsh[1] == hsh[0])
            {
                string s1 = s.substr(1);
                s.pop_back();
                string s2 = s;
                // hsh.clear();
                vector<int> hsh1(2, 0);
                for (int i = 0; i < s1.length(); i++)
                {
                    if (s1[i] == '0')
                        hsh1[0]++;
                    else
                        hsh1[1]++;
                }
                int ans1 = min(hsh1[1], hsh1[0]);

                // hsh.clear();
                vector<int> hsh2(2, 0);
                for (int i = 0; i < s2.length(); i++)
                {
                    if (s2[i] == '0')
                        hsh2[0]++;
                    else
                        hsh2[1]++;
                }
                int ans2 = min(hsh2[1], hsh2[0]);

                cout << max(ans1, ans2) << endl;
            }
            else
                cout << min(hsh[0], hsh[1]) << endl;
        }
    }

    return 0;
}