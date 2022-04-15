// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    vector<double> radii(n);
    for (int i = 0; i < n; i++)
        cin >> radii[i];

    if (n == 1)
    {
        cout << fixed << setprecision(10) << 3.1415926536 * radii[0] * radii[0];
        return 0;
    }

    sort(radii.begin(), radii.end());
    reverse(radii.begin(), radii.end());

    double area = 0;
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
            area += 3.1415926536 * ((radii[i] * radii[i]) - (radii[i + 1] * radii[i + 1]));
    }

    if (n % 2)
        area += 3.1415926536 * radii[n - 1] * radii[n - 1];

    cout << fixed << setprecision(10) << area;

    return 0;
}