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
        cin >> s;

        int x = 1, y = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
                x++;
            else
                break;
        }

        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == '1')
                y++;
            else
                break;
        }

        if(x + y > s.length())
        {
            cout << s << endl;
            continue;
        }

        s.clear();
        while (x--)
            s.push_back('0');

        while (y--)
            s.push_back('1');

        cout << s << endl;
    }
    return 0;
}