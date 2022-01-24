#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int n_copy = n;
    while (k--)
    {
        if (n_copy % 10 == 0)
            n_copy = n_copy / 10;

        else
            n_copy--;
    }
    cout << n_copy;
    return 0;
}