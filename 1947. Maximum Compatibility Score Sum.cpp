// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    void f(vector<vector<int>> &students, vector<vector<int>> &mentors, int idx, int &score, int &currScore, vector<bool> &visited)
    {
        int m = students[0].size(), n = students.size();
        if (idx == n)
        {
            score = max(score, currScore);
            return;
        }

        for (int i = 0; i < n; i++)
        {
            if (visited[i])
                continue;
            int sc = 0;
            for (int j = 0; j < m; j++)
                if (students[idx][j] == mentors[i][j])
                    sc++;
            currScore += sc;
            visited[i] = true;
            f(students, mentors, idx + 1, score, currScore, visited);
            currScore -= sc;
            visited[i] = false;
        }
    }

public:
    int maxCompatibilitySum(vector<vector<int>> &students, vector<vector<int>> &mentors)
    {
        int score = 0, currScore = 0, n = students.size();
        vector<bool> visited(n, false);
        f(students, mentors, 0, score, currScore, visited);

        return score;
    }
};