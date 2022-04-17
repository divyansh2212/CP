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
        int n, r, b;
        cin >> n >> r >> b;

        string s = "";

        int to_add_rs = r / (b + 1);
        int rem = r % (b + 1);

        for (int i = 0; i < b + 1; i++)
        {
            for (int j = 0; j < to_add_rs; j++)
            {
                s.push_back('R');
            }
            if (rem)
            {
                s.push_back('R');
                rem--;
            }
            if (i != b)
                s.push_back('B');
        }
        cout << s << endl;
    }
    return 0;
}