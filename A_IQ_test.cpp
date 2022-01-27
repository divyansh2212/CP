#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int idxeven, idxodd, evens = 0, odds = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x & 1)
        {
            odds++;
            idxodd = i + 1;
        }
        else
        {
            evens++;
            idxeven = i + 1;
        }
    }
    if (odds == 1)
        cout << idxodd;
    else
        cout << idxeven;

    return 0;
}