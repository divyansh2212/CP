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
        int a, b, c;
        cin >> a >> b >> c;

        int i = pow(10, a - 1), j = pow(10, b - 1);

        if (i >= j)
        {
            string s = to_string(j);
            s[s.length() - c] = '1';
            j = stoi(s);
        }
        else
        {
            string s = to_string(i);
            s[s.length() - c] = '1';
            i = stoi(s);
        }
        cout << i << " " << j << endl;
    }
    return 0;
}