// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> factors;
    for (int i = 2; i * i <= n; i++)
    {
        if (factors.size() == k - 1)
            break;
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                factors.push_back(i);
                n /= i;
                if (factors.size() == k - 1)
                    break;
            }
        }
    }

    if (factors.size() != k - 1)
        cout << -1 << endl;
    else if (factors.size() == k - 1 && n == 1)
        cout << -1 << endl;
    else
    {
        for (int i = 0; i < k - 1; i++)
            cout << factors[i] << " ";
        cout << n;
    }

    return 0;
}