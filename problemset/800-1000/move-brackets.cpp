//https://codeforces.com/problemset/problem/1374/C

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
	cin >> t;
	while (t--)
    {
		int n;

		string s;
		cin >> n >> s;

		int cntr = 0;
		int balance = 0;

		for (int i = 0; i < n; ++i)
		{
			if (s[i] == '(')
                balance++;
			else
			{
				balance--;
				if (balance < 0)
                {
					balance = 0;
					cntr++;
				}
			}
		}

		cout << cntr << endl;
	}

    return 0;
}
