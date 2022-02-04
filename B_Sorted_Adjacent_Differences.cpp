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

        multiset<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        bool flag = true;
        vector<int> ans;
        while (!s.empty())
        {
            if (flag)
            {
                int top = *s.begin();
                s.erase(s.begin());
                ans.push_back(top);
            }
            else
            {
                auto it = s.end();
                int top = *(--it);
                s.erase(it);
                ans.push_back(top);
            }
            flag = !flag;
        }

        reverse(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }

    return 0;
}