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

        cout << "1";
        for (int i = 1; i < n - 1; i++)
            cout << "0";
        cout << "1";
        cout << endl;
    }
    return 0;
}