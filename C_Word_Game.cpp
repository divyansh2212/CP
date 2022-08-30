// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    unordered_map<string, int> wordMap;
    vector<string> words[3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            string s;
            cin >> s;
            words[i].push_back(s);
            wordMap[s]++;
        }
    }

    vector<int> points(3, 0);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < words[i].size(); j++)
        {
            if (wordMap[words[i][j]] == 3)
                continue;
            else if (wordMap[words[i][j]] == 2)
                points[i]++;
            else if (wordMap[words[i][j]] == 1)
                points[i] += 3;
        }
    }

    for (int i = 0; i < 3; i++)
        cout << points[i] << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}