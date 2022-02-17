#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, s;
        cin >> a >> s;

        string stra = to_string(a), strs = to_string(s);

        int i = strs.length() - 1, j = stra.length() - 1;
        string ans = "";
        bool flag = false;
        while (j >= 0 && i >= 0)
        {
            if (strs[i] - stra[j] >= 0)
                ans.push_back('0' + strs[i] - stra[j]);
            else
            {
                if (i >= 1)
                    i--;
                else
                    flag = true;
                int numS = ((strs[i] - '0') * 10) + strs[i + 1] - '0';
                int numA = stra[j] - '0';
                if (numS - numA + '0' >= '0' && numS - numA + '0' <= '9')
                    ans.push_back(numS - numA + '0');
                else
                    flag = true;
            }
            i--, j--;
        }
        if (j >= 0 || flag == true)
        {
            cout << -1 << endl;
            continue;
        }
        while (i >= 0)
        {
            ans.push_back(strs[i]);
            i--;
        }

        while (!ans.empty())
        {
            if (ans[ans.length() - 1] == '0')
                ans.pop_back();
            else
                break;
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}