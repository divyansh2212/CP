#include <bits/stdc++.h>
using namespace std;

int check_bit(int n, int i)
{
    return (n & (1 << i)) != 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l;
        cin >> n >> l;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        // vector<pair<int, int>> bits(n, {0, 0});
        int number = 0;
        for (int i = 0; i < l; i++)
        {
            int zero_bits = 0, one_bits = 0;
            for (int j = 0; j < n; j++)
            {
                if (check_bit(arr[j], i))
                    one_bits++;
                else
                    zero_bits++;
            }
            if (one_bits > zero_bits)
                number = (number | (1 << i));
        }
        cout << number << endl;
    }

    return 0;
}