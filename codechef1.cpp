
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> points(3);

        points[0] = a, points[2] = b, points[1] = c;

        sort(points.begin(), points.end());
        if (points[2] == points[1] + points[0])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
