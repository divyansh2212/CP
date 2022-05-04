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

        string s = to_string(n);

        int to_multiply = 1;
        vector<ll> nos;

        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] != '0')
            {
                ll num = (s[i] - '0') * to_multiply;
                nos.push_back(num);
            }
            to_multiply *= 10;
        }

        cout << nos.size() << endl;

        for (auto &l : nos)
            cout << l << " ";
        cout << endl;
    }
    return 0;
}