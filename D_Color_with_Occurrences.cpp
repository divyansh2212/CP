#include <bits/stdc++.h>
using namespace std;
#define int long long
//#define endl "\n"
#define mod 1000000007
#define double long double
//#define INT_MIN -1000000000000000
#define INT_MAX 1e18
bool cmp(pair<string, int> &p1, pair<string, int> &p2)
{
    if (p1.first.size() == p2.first.size())
        return p1 < p2;
    return p1.first.size() > p2.first.size();
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        string t;
        cin >> t;
        int n;
        cin >> n;
        vector<pair<string, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
        }
        sort(v.begin(), v.end(), cmp);
        vector<pair<int, int>> ans;
        int s = 0, prev = -1;
        while (s < t.size())
        {
            // cout<<s<<" "<<prev<<endl;
            int curs = s;
            while (curs > prev)
            {
                bool flag = false;
                int sz = t.size() - curs;
                for (int i = 0; i < n; i++)
                {
                    if (v[i].first.size() > sz)
                        continue;
                    string test = t.substr(curs, v[i].first.size());
                    if (test == v[i].first)
                    {
                        ans.push_back({v[i].second, curs});
                        flag = true;
                        prev = curs;
                        s = curs + v[i].first.size();
                        curs = -1;
                        break;
                    }
                }
                if (flag)
                    break;
                curs--;
            }
            if (curs == prev)
            {
                cout << -1 << endl;
                break;
            }
        }
        if (s == t.size())
        {
            cout << ans.size() << endl;
            for (int i = 0; i < ans.size(); i++)
                cout << ans[i].first + 1 << " " << ans[i].second + 1 << endl;
        }
    }
}
