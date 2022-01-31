#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 7 == 0)
            cout << n << endl;
        else
        {
            map<int, int> m1;
            map<int, int> m2;
            map<int, int> m3;
            int n_copy = n;
            int cnt = 0;
            while (n_copy)
            {
                int rem = n_copy % 10;
                m1[cnt] = rem;
                n_copy = n_copy / 10;
                cnt++;
            }
            int rem = n % 7;
            int num1 = n - rem;
            n_copy = num1, cnt = 0;
            while (n_copy)
            {
                int r = n_copy % 10;
                m2[cnt] = r;
                n_copy = n_copy / 10;
                cnt++;
            }

            int num2 = n + (7 - rem);
            n_copy = num2, cnt = 0;
            while (n_copy)
            {
                int r = n_copy % 10;
                m3[cnt] = r;
                n_copy = n_copy / 10;
                cnt++;
            }

            if (m1.size() != m2.size())
                cout << num2 << endl;
            else if (m1.size() != m3.size())
                cout << num1 << endl;

            else
            {
                int cnt1 = 0, cnt2 = 0;
                for (auto m : m2)
                {
                    if (m1[m.first] == m.second)
                        cnt1++;
                }
                for (auto m : m3)
                {
                    if (m1[m.first] == m.second)
                        cnt2++;
                }
                if (cnt1 > cnt2)
                    cout << num1 << endl;
                else
                    cout << num2 << endl;
            }
        }
    }
    return 0;
}