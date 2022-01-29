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
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                cnt++;
                continue;
            }
            int val = 10 - s[i] + '0';
            if (val <= k)
            {
                cnt++;
                k = k - val;
            }
            else
            {
                for (int j = i + 1; j < s.length(); j++)
                {
                    if (s[j] >= s[i])
                        cnt++;
                    else
                        break;
                }
                break;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}