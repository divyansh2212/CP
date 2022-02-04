#include <bits/stdc++.h>
using namespace std;
vector<int> numbers;

void to_calculate(string s, int idx, int score)
{
    if (idx == s.length())
    {
        numbers.push_back(score);
        return;
    }
    if (s[idx] == '+')
        to_calculate(s, idx + 1, score + 1);

    else if (s[idx] == '-')
        to_calculate(s, idx + 1, score - 1);

    else
    {
        to_calculate(s, idx + 1, score + 1);
        to_calculate(s, idx + 1, score - 1);
    }
}

int main()
{
    string s1, s2;
    cin >> s1;
    int pos = 0;

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == '+')
            pos++;
        else
            pos--;
    }
    cin >> s2;
    to_calculate(s2, 0, 0);

    double count = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] == pos)
            count++;
    }
    double size = numbers.size();
    cout << fixed << setprecision(12) << count / size;
    return 0;
}