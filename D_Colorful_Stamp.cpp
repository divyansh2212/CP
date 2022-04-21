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
            int n;
            cin >> n;

            string s;
            cin >> s;

            int hsh1 = 0, hsh2 = 0;
            int i = s.length();
            bool fnlFlag = true;
            while (i >= 0)
            {
                i--;
                if (s[i] == 'R')
                    hsh1++;
                else if (s[i] == 'B')
                    hsh2++;
                else
                {
                    if ((hsh1 == 0 && hsh2 != 0) || (hsh1 != 0 && hsh2 == 0))
                        fnlFlag = false;
                    hsh1 = 0, hsh2 = 0;
                    if (fnlFlag == false)
                        break;
                }
            }

            hsh1 = 0, hsh2 = 0;

            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'R')
                    hsh1++;
                else if (s[i] == 'W')
                    break;
                else
                    hsh2++;
            }

            if ((hsh1 == 0 && hsh2 != 0) || (hsh1 != 0 && hsh2 == 0))
                fnlFlag = false;

            if (fnlFlag)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        return 0;
    }