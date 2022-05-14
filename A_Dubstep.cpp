// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;

    if (s.length() < 3)
    {
        cout << s << endl;
        return 0;
    }

    int n = s.length(), i = 0;
    vector<char> ans;

    if (s[0] == 'W' && s[1] == 'U' && s[2] == 'B')
        i = 3;

    while (i < n)
    {
        if (i + 2 < n && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i = i + 3;
            if (ans.size())
                if (ans.back() != ' ')
                    ans.push_back(' ');
        }
        else
        {
            ans.push_back(s[i]);
            i++;
        }
    }

    for (auto &c : ans)
        cout << c;

    return 0;
}