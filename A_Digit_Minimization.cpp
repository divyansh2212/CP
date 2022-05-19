// Jai Shree Babosa!

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

        string num = to_string(n);

        if (num.length() == 2)
        {
            swap(num[0], num[1]);
            num.pop_back();
            cout << num << endl;
            continue;
        }

        char smallest = '9';
        for (int i = 0; i < num.length(); i++)
            smallest = min(smallest, num[i]);

        cout << smallest << endl;
    }
    return 0;
}