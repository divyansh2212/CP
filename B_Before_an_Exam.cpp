// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    int d, sumTime;
    cin >> d >> sumTime;

    int minTimeSum = 0, maxTimeSum = 0;

    vector<pair<int, int>> times;
    for (int i = 0; i < d; i++)
    {
        int x, y;
        cin >> x >> y;
        minTimeSum += x;
        maxTimeSum += y;
        times.push_back({x, y});
    }

    bool flag = true;

    if (maxTimeSum < sumTime || minTimeSum > sumTime)
        flag = false;

    if (flag)
    {
        cout << "YES\n";
        sumTime -= minTimeSum;
        vector<int> ans;
        for (int i = 0; i < d; i++)
        {
            int curr = 0;
            for (int to_add = 0; to_add <= times[i].second - times[i].first; to_add++)
            {
                if (sumTime - to_add >= 0)
                    curr = times[i].first + to_add;
                else
                    break;
            }
            sumTime -= curr - times[i].first;
            ans.push_back(curr);
        }
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }

    else
        cout << "NO\n";

    return 0;
}