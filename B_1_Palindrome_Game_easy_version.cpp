// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPalindrome(string &s)
{
    int i = 0, j = s.length() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
            return false;
        i++, j--;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int alice = 0, bob = 0;

        bool aliceTurn = true, canReverse = false;

        int no_1s = 0;
        for (int i = 0; i < n; i++)
            if (s[i] == '1')
                no_1s++;

        while (1)
        {
            if (no_1s == n)
                break;

            if (canReverse)
            {
                reverse(s.begin(), s.end());
                canReverse = false;
            }

            else
            {
                canReverse = true;
                int last_idx = -1;
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == '0')
                    {
                        s[i] = '1';
                        last_idx = i;
                        if (isPalindrome(s))
                        {
                            last_idx = -1;
                            canReverse = false;
                            break;
                        }
                        else
                            s[i] = '0';
                    }
                }
                if (last_idx != -1)
                    s[last_idx] == '1';
                if (aliceTurn)
                    alice++;
                else
                    bob++;
                no_1s++;
            }
            aliceTurn = !aliceTurn;
        }

        if (alice == bob)
            cout << "DRAW\n";
        else if (alice > bob)
            cout << "BOB\n";
        else
            cout << "ALICE\n";
    }
    return 0;
}