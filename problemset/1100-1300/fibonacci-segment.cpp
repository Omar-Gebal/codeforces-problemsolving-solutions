//https://codeforces.com/problemset/problem/365/B

#include <bits/stdc++.h>

using namespace std;

long long sequence[100000 + 5];
int main()
{
    int n;
    cin >> n;
    int ans = 2;

    if (n <= 2)
    {
        cout << n;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> sequence[i];
    }

    int p = 0;
    for (int i = 2; i < n; i++)
    {
            if (sequence[i] == sequence[i - 1] + sequence[i - 2])
            {
                ans++;
            }
            else
            {
                p = max(p, ans);
                ans = 2;
            }
    }


    cout << max(p, ans);
    return 0;
}
