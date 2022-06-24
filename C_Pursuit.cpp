// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool static compare(int &a1, int &a2)
{
    return a1 > a2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        sort(a.begin(), a.end(), compare);
        sort(b.begin(), b.end(), compare);

        vector<ll> prefixMe(n + 1), prefixLlya(n + 1);

        for (int i = 1; i <= n; i++)
        {
            prefixMe[i] = prefixMe[i - 1] + a[i - 1];
            prefixLlya[i] = prefixLlya[i - 1] + b[i - 1];
        }

        int stages = n - (n / 4);
        ll myScore = prefixMe[stages], llyaScore = prefixLlya[stages];

        if (myScore >= llyaScore)
        {
            cout << 0 << endl;
            continue;
        }

        int to_add = ceil((llyaScore - myScore) / 100.0);

        stages = (n + to_add) - ((n + to_add) / 4);
        myScore = (100 * to_add);

        myScore += prefixMe[stages - to_add];

        llyaScore = prefixLlya[min(n, stages)];

        while (myScore < llyaScore)
        {
            to_add++;
            myScore = (100 * to_add);
            stages = (n + to_add) - ((n + to_add) / 4);
            myScore += prefixMe[min(n, stages - to_add)];
            llyaScore = prefixLlya[min(n, stages)];
        }

        cout << to_add << endl;
    }
    return 0;
}