// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class node
{
public:
    int data;
    node *next;
    int actualidx;
    node(int val, int idx)
    {
        data = val;
        next = NULL;
        actualidx = idx;
    }
};

ll trying(vector<int> &initiators, int &n, vector<node *> &list)
{
    vector<int> visited(n + 1, false);
    ll ans = 0;
    for (int i = 0; i < initiators.size(); i++)
    {
        ll curr = 0;
        if (visited[initiators[i]] == false)
        {
            node *temp = list[initiators[i]];
            while (temp != NULL)
            {
                if (visited[temp->actualidx] == false)
                {
                    visited[temp->actualidx] = true;
                    curr = max(curr, 0LL + temp->data);
                }
                temp = temp->next;
            }
            ans += curr;
        }
    }
    return ans;
}

int main()
{
    int test = 0;
    int t;
    cin >> t;
    while (t--)
    {
        test++;
        int n;
        cin >> n;
        vector<node *> list(n + 1);
        int i;
        for (i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            list[i] = new node(x, i);
        }

        vector<int> pointed(n + 1, false);
        for (i = 1; i < n + 1; i++)
        {
            int x;
            cin >> x;
            pointed[x] = true;
            if (x != 0)
                list[i]->next = list[x];
        }

        vector<int> initiators;
        for (int i = 1; i < n + 1; i++)
            if (pointed[i] == false)
                initiators.push_back(i);

        ll ans = INT_MIN;
        do
        {
            ans = max(ans, trying(initiators, n, list));
        } while (next_permutation(initiators.begin(), initiators.end()));

        cout << "Case #" << test << ": " << ans << endl;
    }
    return 0;
}