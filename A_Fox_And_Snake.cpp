// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;

    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2)
        {
            for (int j = 1; j <= m; j++)
                cout << "#";
        }
        else
        {
            if (flag)
            {
                cout << "#";
                for (int j = 2; j <= m; j++)
                    cout << ".";
            }
            else
            {
                for (int j = 1; j < m; j++)
                    cout << ".";
                cout << "#";
            }
            flag = !flag;
        }
        cout << endl;
    }

    return 0;
}