// DONE
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long b;
    cin >> b;
    int divisors = 0;
    for (long long i = 1; i * i <= b; i++)
    {
        if (b % i == 0)
        {
            if (i == b / i)
                divisors++;
            else
                divisors += 2;
        }
    }
    cout << divisors;
    return 0;
}