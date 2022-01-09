// DONE

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int lp = {0, 1, 2, 3, 2, 5, 2, }
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s;
        cin >> t;
        int s_size = s.length() / __gcd(s.length(), t.length());
        int t_size = t.length() / __gcd(s.length(), t.length());

        string new_s = "";
        for (int i = 1; i <= t_size; i++)
            new_s += s;
        string new_t = "";
        for (int i = 1; i <= s_size; i++)
            new_t += t;

        if (new_s == new_t)
            cout << new_s << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}