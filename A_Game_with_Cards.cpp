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
        int n, m;

        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        cin >> m;
        vector<int> b(m);
        for (int i = 0; i < m; i++)
            cin >> b[i];

        vector<int> a_copy = a;
        vector<int> b_copy = b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(a_copy.begin(), a_copy.end());
        sort(b_copy.begin(), b_copy.end());

        bool flag = true;
        int lastcard = -1;
        while (1)
        {
            if (flag)
            {
                if (a.size() && a[a.size() - 1] > lastcard)
                {
                    lastcard = a[a.size() - 1];
                    a.pop_back();
                    flag = !flag;
                }
                else
                    break;
            }
            else
            {
                if (b.size() && b[b.size() - 1] > lastcard)
                {
                    lastcard = b[b.size() - 1];
                    b.pop_back();
                    flag = !flag;
                }
                else
                    break;
            }
        }
        if (!flag)
            cout << "Alice\n";
        else
            cout << "Bob\n";

        flag = false, lastcard = -1;
        while (1)
        {
            if (flag)
            {
                if (a_copy.size() && a_copy[a_copy.size() - 1] > lastcard)
                {
                    lastcard = a_copy[a_copy.size() - 1];
                    a_copy.pop_back();
                    flag = !flag;
                }
                else
                    break;
            }
            else
            {
                if (b_copy.size() && b_copy[b_copy.size() - 1] > lastcard)
                {
                    lastcard = b_copy[b_copy.size() - 1];
                    b_copy.pop_back();
                    flag = !flag;
                }
                else
                    break;
            }
        }
        if (!flag)
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }
    return 0;
}