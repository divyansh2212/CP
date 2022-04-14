// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    ll first = 0, second = 0;
    vector<int> fs;
    vector<int> ss;
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i == n - 1 && x > 0)
            flag = true;

        if (x > 0)
        {
            first += x;
            fs.push_back(x);
        }
        else
        {
            x *= -1;
            second += x;
            ss.push_back(x);
        }
    }

    if (first > second)
        cout << "first";

    else if (second > first)
        cout << "second";

    else if (first == second)
    {
        for (int i = 0; i < min(ss.size(), fs.size()); i++)
        {
            if (fs[i] > ss[i])
            {
                cout << "first";
                goto end;
            }
            else if (fs[i] < ss[i])
            {
                cout << "second";
                goto end;
            }
        }

        if (flag)
            cout << "first";
        else
            cout << "second";
    }
    end:
    return 0;
}