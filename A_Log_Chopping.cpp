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

        vector<int> pisces(n);
        for (int i = 0; i < n; i++)
            cin >> pisces[i];

        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            if (pisces[i] == 1)
                continue;
            if ((pisces[i] - 1) % 2)
                flag = !flag;
        }

        if (!flag)
            cout << "errorgorn\n";
        else
            cout << "maomao90\n";
    }
    return 0;
}