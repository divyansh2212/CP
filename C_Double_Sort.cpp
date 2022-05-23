// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

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

        vector<int> A = a, B = b;

        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        vector<pair<int, int>> pairs;

        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            if (A[i] == a[i] && B[i] == b[i])
                continue;
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] == A[i] && B[i] == b[j])
                {
                    pairs.push_back({i, j});
                    swap(a[i], a[j]);
                    swap(b[i], b[j]);
                    break;
                }
            }
            if (A[i] == a[i] && B[i] == b[i])
                continue;
            else
            {
                flag = true;
                break;
            }
        }

        if (flag)
            cout << -1 << endl;

        else
        {
            cout << pairs.size() << endl;
            for (int i = 0; i < pairs.size(); i++)
                cout << pairs[i].first + 1 << " " << pairs[i].second + 1 << endl;
        }
    }
    return 0;
}