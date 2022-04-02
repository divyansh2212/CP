// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printFirst(int c)
{
    for (int i = 1; i <= (2 * c) + 1; i++)
    {
        if (i % 2)
            cout << "+";
        else
            cout << "-";
    }
}
void printSecond(int c)
{
    for (int i = 1; i <= (2 * c) + 1; i++)
    {
        if (i % 2)
            cout << "|";
        else
            cout << ".";
    }
}

int main()
{
    int t;
    cin >> t;
    int k = 0;
    while (k < t)
    {
        int r, c;
        cin >> r >> c;
        k++;
        cout << "Case #" << k << ":" << endl;
        cout << "..";

        for (int i = 1; i <= (2 * c) - 1; i++)
        {
            if (i % 2)
                cout << "+";
            else
                cout << "-";
        }
        cout << endl;
        cout << "..";
        for (int i = 1; i <= (2 * c) - 1; i++)
        {
            if (i % 2)
                cout << "|";
            else
                cout << ".";
        }
        cout << endl;

        for (int i = 1; i <= (2 * r) - 1; i++)
        {
            if (i % 2)
                printFirst(c);
            else
                printSecond(c);
            cout << endl;
        }
    }
    return 0;
}