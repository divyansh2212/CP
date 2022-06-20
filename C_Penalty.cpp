// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void generate(string s, int idx, int &ans)
{
    if (idx == s.length())
    {
        int movesAleft = 5, scoreA = 0,
            movesBleft = 5, scoreB = 0;

        for (int i = 0; i < 10; i++)
        {
            if (i + 1 > ans)
                break;
            if (i % 2 == 0)
            {
                if (s[i] == '1')
                    scoreA++;
                movesAleft--;
            }
            else
            {
                if (s[i] == '1')
                    scoreB++;
                movesBleft--;
            }
            if (scoreA > scoreB + movesBleft)
            {
                ans = min(ans, i + 1);
                break;
            }
            else if (scoreB > scoreA + movesAleft)
            {
                ans = min(ans, i + 1);
                break;
            }
        }
        return;
    }
    if (s[idx] == '?')
    {
        s[idx] = '1';
        generate(s, idx + 1, ans);
        s[idx] = '0';
        generate(s, idx + 1, ans);
    }
    else
        generate(s, idx + 1, ans);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int ans = 10;
        generate(s, 0, ans);

        cout << ans << endl;
    }
    return 0;
}