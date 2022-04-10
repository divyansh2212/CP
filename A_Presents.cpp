// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n + 1);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[x] = i + 1;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i + 1] << " ";

    return 0;
}