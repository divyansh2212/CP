#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> sx;
        set<int> sy;
        while (n--)
        {
            int x, y;
            cin >> x >> y;
            sx.insert(x);
            sy.insert(y);
        }
        cout << sx.size() + sy.size() << endl;
    }
    return 0;
}