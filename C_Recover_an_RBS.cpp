// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF INT_MAX
const int M = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();

    int brackets = 0, question = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            brackets++;
        else if (s[i] == ')')
            brackets--;
        else
            question++;

        if (brackets < 0)
            brackets = 0, question--;

        if (brackets == 0 && question == 1)
            question--, brackets++;
    }

    question -= brackets;
    if (question)
        cout << "NO\n";
    else
        cout << "YES\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}