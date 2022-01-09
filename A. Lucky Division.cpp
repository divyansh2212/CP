#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
vector<bool> almost_lucky(N, false);

bool check(int n)
{
    while (n)
    {
        int rem = n % 10;
        if (rem != 4 && rem != 7)
            return false;
        n = n / 10;
    }
    return true;
}

int main()
{
    for (int i = 1; i < N; i++)
    {
        if (almost_lucky[i] == false)
            almost_lucky[i] = check(i);
        if (almost_lucky[i])
        {
            for (int j = 2 * i; j < N; j = j + i)
                almost_lucky[j] = true;
        }
    }

    int n;
    cin >> n;
    if (almost_lucky[n])
        cout << "YES";
    else
        cout << "NO";

    return 0;
}