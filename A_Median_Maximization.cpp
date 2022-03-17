#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;

        int median = ceil(n / 2.0);
        median--;
        cout << s / (n - median) << endl;
    }
    return 0;
}