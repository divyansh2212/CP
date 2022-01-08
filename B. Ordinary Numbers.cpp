// DONE
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		if (n < 10)
		{
			cout << n << endl;
			continue;
		}

		int no_digits = 0;
		int n_copy = n;
		while (n)
		{
			no_digits++;
			n = n / 10;
		}

		int ans = (9 * (no_digits - 1));
		int first_digit;
		n = n_copy;
		while (n_copy)
		{
			first_digit = n_copy % 10;
			n_copy = n_copy / 10;
		}
		ans += first_digit - 1;
		int to_compare = 0;

		while (no_digits--)
		{
			to_compare = (to_compare * 10) + first_digit;
		}

		if (to_compare <= n)
			ans++;
		cout << ans << endl;
	}
	return 0;
}
