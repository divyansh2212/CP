// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

bool static cmp(vector<int> &a, vector<int> &b)
{
    if (a[0] == b[0])
        return a[1] < b[1];
    return a[0] < b[0];
}

void solve()
{
    string t;
    cin >> t;

    int n;
    cin >> n;

    vector<string> subs(n);
    for (int i = 0; i < n; i++)
        cin >> subs[i];

    vector<vector<int>> groups;
    for (int i = 0; i < n; i++)
    {
        string s = subs[i];
        int len = s.length(), k = 0;
        while (k < t.length())
        {
            if (s[0] != t[k])
                k++;
            else
            {
                string subtring = t.substr(k, len);
                if (subtring == s)
                    groups.push_back({k, k + len - 1, i});
                k++;
            }
        }
    }

    bool flag = true;
    sort(groups.begin(), groups.end());
    vector<vector<int>> ans;
    if (groups.size() == 0)
        flag = false;

    int reqd = 0, i = 0;

    int lastIdx = -1;
    while (i < groups.size())
    {
        if (groups[i][0] > reqd)
        {
            if (lastIdx == -1)
            {
                flag = false;
                break;
            }
            else
            {
                ans.push_back({groups[lastIdx][2] + 1, groups[lastIdx][0] + 1});
                reqd = groups[lastIdx][1] + 1;
                lastIdx = -1;
            }
        }
        else
        {
            lastIdx = i;
            if (i == groups.size() - 1)
            {
                ans.push_back({groups[lastIdx][2] + 1, groups[lastIdx][0] + 1});
                reqd = groups[lastIdx][1] + 1;
                if (reqd < t.length())
                    flag = false;
                lastIdx = -1;
            }
        }
        i++;
    }

    if (flag == false)
        cout << -1 << endl;
    else
    {
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i][0] << " " << ans[i][1] << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}