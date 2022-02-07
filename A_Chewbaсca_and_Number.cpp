#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin >> x;

    vector<int> digits;
    while (x)
    {
        int rem =  x % 10;
        digits.push_back(rem);
        x = x / 10;
    }
    reverse(digits.begin(), digits.end());

    for (int i = 0; i < digits.size(); i++)
    {
        if (digits[i] > 4)
        {
            if (i == 0 && digits[i] == 9)
                continue;
            digits[i] = 9 - digits[i];
        }
    }

    long long num = 0;
    for (int i = 0; i < digits.size(); i++)
        num = num * 10 + digits[i];
        
    cout << num;

    return 0;
}