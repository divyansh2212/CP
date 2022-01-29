#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            s.push_back(c);
        }
        string ans1 = "", ans2 = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
                ans1.push_back('0'), ans2.push_back('0');

            else if (s[i] == '1')
            {
                if (ans1 >= ans2)
                    ans2.push_back('1'), ans1.push_back('0');
                else
                    ans1.push_back('1'), ans2.push_back('0');
            }

            else
            {
                if (ans1 == ans2)
                    ans2.push_back('1'), ans1.push_back('1');
                else if (ans1 >= ans2)
                    ans2.push_back('2'), ans1.push_back('0');
                else
                    ans1.push_back('2'), ans2.push_back('0');
            }
        }
        cout << ans2 << endl
             << ans1 << endl;
    }

    return 0;
}