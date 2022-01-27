#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    double a, b;
    cin >> n >> m >> a >> b;
    int money = 0;
    if (b / m <= a)
    {
        money += (n / m) * b;
        int to_add = min((n % m) * a, b);
        money += to_add;
    }
    else
        money += n * a;

    cout << money;
    return 0;
}