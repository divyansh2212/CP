#include <bits/stdc++.h>
using namespace std;
// DONE
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int freq[26] = {0};

        for (int i = 0; i < s.length(); i++)
            freq[s[i] - 'a']++;

        int pairs = 0;
        for (int i = 0; i < 26; i++)
            pairs += freq[i] / 2;

        int wantedsize = n / k;
        while (wantedsize)
        {
            int reqdpairs = (wantedsize / 2) * k;
            if (reqdpairs <= pairs)
            {
                cout << wantedsize << endl;
                break;
            }
            wantedsize--;
        }
    }

    return 0;
}