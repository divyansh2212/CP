// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool areBracketsBalanced(vector<char> &arr, int si, int endi)
{
    stack<char> s;
    char x;

    for (int i = si; i < endi + 1; i++)
    {
        if (arr[i] == ')')
        {
            s.push(arr[i]);
            continue;
        }

        if (s.empty())
            return false;

        x = s.top();
        s.pop();
    }

    return (s.empty());
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<char> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        reverse(arr.begin(), arr.end());

        int prevpoint = arr.size();
        int prevslast = arr.size() - 2;
        int operations = 0;
        int point = arr.size();
        int k = -1;
        while (point > 0)
        {
            int l = point - 1, scndlast = point - 2;
            k++;
            if (point == prevpoint && k > 0)
                scndlast = --prevslast;
            else
                prevpoint = point, prevslast = scndlast;
            if (scndlast < 0)
                break;

            int sz = l - scndlast + 1;
            int l_copy = l, scnd_copy = scndlast;
            if ((l - scndlast + 1) % 2)
            {
                int sz = l - scndlast + 1;
                bool flag = true;
                while (scndlast <= l)
                {
                    if (arr[scndlast] == arr[l])
                        scndlast++, l--;
                    else
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    point = scnd_copy;
                    operations++;
                }
            }
            else
            {
                bool flag = true;
                while (scndlast <= l)
                {
                    if (arr[scndlast] == arr[l])
                        scndlast++, l--;
                    else
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    point = scnd_copy;
                    operations++;
                }
                else
                {
                    flag = areBracketsBalanced(arr, scnd_copy, l_copy);
                    if (flag)
                    {
                        point = scnd_copy;
                        operations++;
                    }
                }
            }
        }
        if (point < 0)
            point = 0;
        cout << operations << " " << point << endl;
    }
    return 0;
}