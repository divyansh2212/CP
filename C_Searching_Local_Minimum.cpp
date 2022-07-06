// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n + 1);
    int ans = -1;
    for (int q = 1; q <= min(100, n); q++)
    {
        scanf("%d", &arr[q]);
        printf("? %d\n", q);
        fflush(stdout);

        if (q >= 3)
            if (arr[q - 1] < arr[q] && arr[q - 1] < arr[q - 2])
                ans = q - 1;
    }

    if (ans != -1)
    {
        printf("! %d\n", ans);
        fflush(stdout);
    }

    return 0;
}