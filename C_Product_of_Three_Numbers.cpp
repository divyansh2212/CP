#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        vector<int> triplets;
        bool flag = false;
        for (long long i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i == n / i)
                    break;
                // int x = i;
                int new_n = n / i;
                for (int j = 2; j * j <= new_n; j++)
                {
                    if (new_n % j == 0 && j != new_n / j && j != i && new_n / j != i)
                    {
                        flag = true;
                        triplets.push_back(i), triplets.push_back(j), triplets.push_back(new_n / j);
                        break;
                    }
                }
                if (flag)
                    break;
            }
        }
        if (flag)
        {
            sort(triplets.begin(), triplets.end());
            cout << "YES\n";
            cout << triplets[0] << " " << triplets[1] << " " << triplets[2] << endl;
        }
        else
            cout << "NO\n";
    }
    return 0;
}