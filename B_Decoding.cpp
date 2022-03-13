#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string ans(n, ' ');

    int last = n - 1, first = 0, i = 1;

    while (!s.empty())
    {
        char c = s[s.length() - 1];

        if (i % 2)
        {
            ans[last] = c;
            last--;
        }
        else
        {
            ans[first] = c;
            first++;
        }
        i++;
        s.pop_back();
    }

    cout << ans;
    return 0;
}