#include <bits/stdc++.h>
using namespace std;
// Jai Shree Babosa!
#define ll long long

int positiveAnswersCount(int N, int Q, string s, vector<int> L, vector<int> R, vector<vector<ll>> &hsh)
{
    // TODO: Complete this function to count number of questions Anna can answer
    // "yes" to
    int ans = 0;
    for (int i = 0; i < Q; i++)
    {
        int l = L[i], r = R[i];

        int flag = 0;
        for (ll i = 0; i < 26; i++)
        {
            int chars = hsh[r][i] - hsh[l - 1][i];
            if (chars % 2)
                flag++;
        }
        if ((flag == 1 && ((r - l + 1) % 2)) || flag == 0)
            ans++;
    }

    return ans;
}

int main()
{
    int T;
    // Get number of test cases
    cin >> T;
    for (int tc = 1; tc <= T; tc++)
    {
        int N, Q;
        // Get number of blocks and number of questions
        cin >> N >> Q;

        string s;
        // Get the string representing the characters on the blocks
        cin >> s;

        vector<int> L(Q), R(Q);
        for (int i = 0; i < Q; i++)
        {
            cin >> L[i] >> R[i];
        }

        vector<vector<ll>> hsh(N + 1, vector<ll>(26, 0));
        for (ll i = 1; i < N + 1; i++)
        {
            hsh[i] = hsh[i - 1];
            hsh[i][s[i - 1] - 'A']++;
        }

        cout << "Case #" << tc << ": "
             << positiveAnswersCount(N, Q, s, L, R, hsh) << endl;
    }
    return 0;
}
