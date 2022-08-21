// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int> &energy, vector<int> &experience)
    {
        int ans = 0, n = experience.size();
        for (int i = 0; i < n; i++)
        {
            if (energy[i] >= initialEnergy)
            {
                ans += energy[i] + 1 - initialEnergy;
                initialEnergy = 1;
            }
            else
                initialEnergy -= energy[i];
            if (experience[i] >= initialExperience)
            {
                ans += experience[i] + 1 - initialExperience;
                initialExperience = experience[i] + 1;
                initialExperience += experience[i];
            }
            else
                initialExperience += experience[i];
        }

        return ans;
    }
};