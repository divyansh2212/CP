#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> val(n);

    for (int i = 0; i < n; i++)
        cin >> val[i];

    int ans = 0, val1 = 1, val2 = 1;
    bool flag = false;
    for (int i = 1; i < n; i++)
    {
        if (val[i] == val[i - 1] && flag == false)
        {
            val1++;
        }
        else if (val[i] == val[i - 1] && flag == true)
        {
            val2++;
        }
        else
        {
            flag = !flag;
        }
    }

    return 0;
}