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

        bool flag = false;
        vector<int> hsh(10, 0);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            hsh[x % 10]++;
        }

        for (int i = 0; i <= 9; i++)
        {
            for (int j = 0; j <= 9; j++)
            {
                for (int k = 0; k <= 9; k++)
                {
                    int sum = i + j + k;

                    if (sum == 3 || sum == 13 || sum == 23)
                    {
                        vector<int> c = hsh;
                        c[i]--, c[j]--, c[k]--;
                        if (c[i] >= 0 && c[j] >= 0 && c[k] >= 0)
                        {
                            flag = true;
                            break;
                        }
                    }
                }
                if (flag)
                    break;
            }
            if (flag)
                break;
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}