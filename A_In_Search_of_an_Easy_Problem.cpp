// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x)
            flag = true;
    }
    if (flag)
        cout << "HARD";
    else
        cout << "EASY";

    return 0;
}