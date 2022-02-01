#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> hsh(6, 1);

    long long cnt = 0;
    long long i = 1, ans;
    while (1)
    {
        i = i % 6;
        if (i == 0)
            i = 1;
        cnt += hsh[i];
        hsh[i] *= 2;
        if (n <= cnt)
        {
            ans = i;
            break;
        }
        i++;
    }
    if (ans == 1)
        cout << "Sheldon";
    else if (ans == 2)
        cout << "Leonard";
    else if (ans == 3)
        cout << "Penny";
    else if (ans == 4)
        cout << "Rajesh";
    else
        cout << "Howard";
    return 0;
}