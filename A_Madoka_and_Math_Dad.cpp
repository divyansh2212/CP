#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n < 3)
            cout << n << endl;

        else
        {
            string s1 = "", s2 = "";
            int sum1 = 0, sum2 = 0;

            for (int i = 0; i < 1000; i++)
            {
                if (i % 2)
                {
                    s1.push_back('1');
                    sum1 += 1;
                }
                else
                {
                    s1.push_back('2');
                    sum1 += 2;
                }
                if (sum1 == n)
                    break;
            }
            if (sum1 == n)
            {
                cout << s1 << endl;
                continue;
            }
            for (int i = 0; i < 1000; i++)
            {
                if (i % 2)
                {
                    s2.push_back('2');
                    sum2 += 2;
                }
                else
                {
                    s2.push_back('1');
                    sum2 += 1;
                }
                if (sum2 == n)
                    break;
            }
            if (sum2 == n)
            {
                cout << s2 << endl;
                continue;
            }
        }
    }
    return 0;
}