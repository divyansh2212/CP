    // Jai Shree Babosa!

    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long

    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            string s;
            cin >> s;

            vector<int> hsh(26, 0);
            for (int i = 0; i < s.length(); i++)
                hsh[s[i] - 'a']++;

            string fnlstr = "";
            int ans = 0;
            for (int i = 0; i < s.length(); i++)
            {
                if (hsh[s[i] - 'a'] == 1)
                    {hsh[s[i] - 'a']--; ans++;}
                else
                    fnlstr.push_back(s[i]);
            }

            int i = 0;
            while (i < fnlstr.length() - 1)
            {
                if (fnlstr[i] == fnlstr[i + 1])
                {
                    fnlstr[i] = '0', fnlstr[i + 1] = '0';
                    i += 2;
                }
                else
                    i++;
            }

            i = 0;
            while (i < fnlstr.length())
            {
                if (fnlstr[i] == '0')
                {
                    i++;
                    continue;
                }
                bool flag = false;
                for (int j = i + 1; j < fnlstr.length(); j++)
                {
                    if (fnlstr[j] == '0')
                    {
                        ans += j - i;
                        i = j + 1;
                        break;
                    }
                    if (fnlstr[j] == fnlstr[i])
                    {
                        ans += j - i - 1;
                        i = j + 1;
                        fnlstr[j] = '0', fnlstr[i] = '0';
                        break;
                    }
                }
            }
            cout << ans << endl;
        }
        return 0;
    }