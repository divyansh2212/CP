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

        vector<pair<int, int>> elements(n);
        for (int i = 0; i < n; i++)
            cin >> elements[i].first;

        for (int i = 0; i < n; i++)
            cin >> elements[i].second;

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (elements[i].first > elements[j].first && i < j)
                {
                    if (elements[i].second != elements[j].second)
                    {
                        swap(elements[i], elements[j]);
                        j = 0;
                    }
                }
                else if (elements[i].first < elements[j].first && i > j)
                    if (elements[i].second != elements[j].second)
                    {
                        swap(elements[i], elements[j]);
                        j = 0;
                    }
            }
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (elements[i + 1].first < elements[i].first)
            {
                if (elements[i + 1].second != elements[i].second)
                    swap(elements[i], elements[i + 1]);
                else
                    flag = false;
            }
        }

        if (flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}