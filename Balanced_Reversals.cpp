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

        // while (1)
        // {
        //     int idx1 = -1, idx0 = -1;

        //     for (int i = 0; i < n; i++)
        //     {
        //         if (s[i] == '0')
        //             idx0 = i;
        //         if (s[i] == '1' && idx1 == -1)
        //             idx1 = i;
        //     }

        //     if (idx0 != -1 && idx1 != -1 && idx1 < idx0)
        //         reverse(s.begin() + idx1, s.begin() + idx0 + 1);
        //     else
        //         break;
        // }
        string ans = "";
        int ones = 0, zeroes = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                ones++;
            else
                zeroes++;
        }

        while (zeroes--)
            ans.push_back('0');
        while (ones--)
            ans.push_back('1');

        cout << ans << endl;
    }
    return 0;
}