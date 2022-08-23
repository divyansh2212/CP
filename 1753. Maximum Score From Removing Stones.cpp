// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int maximumScore(int a, int b, int c)
    {
        int score = 0;
        priority_queue<int> pq;
        pq.push(a), pq.push(b), pq.push(c);

        while (1)
        {
            int top1 = pq.top();
            pq.pop();
            int top2 = pq.top();
            pq.pop();
            int top3 = pq.top();
            pq.pop();
            if (top1 == 0 || top2 == 0)
                break;
            pq.push(top2 - top3), pq.push(top1 - top3), pq.push(top3);
            score += top2 - top3;
        }   

        return score;
    }
};