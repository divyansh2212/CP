// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    vector<int> a1, a2, a3;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
            a1.push_back(i + 1);
        else if (x == 2)
            a2.push_back(i + 1);
        else
            a3.push_back(i + 1);
    }

    int x = min(a1.size(), min(a2.size(), a3.size()));
    cout << x << endl;
    for (int i = 0; i < x; i++)
        cout << a1[i] << " " << a2[i] << " " << a3[i] << endl;

    return 0;
}