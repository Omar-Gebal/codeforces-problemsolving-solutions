//https://codeforces.com/problemset/problem/492/B

#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main()
{
    int n, lanterns[1005];
    long double minimum;
    long long l;
    cin >> n >> l;

    for(int i = 0; i < n; i++)
    {
        cin >> lanterns[i];
    }

    sort(lanterns, lanterns + n);

    minimum = lanterns[0] - 0;


    if (l - lanterns[n-1] > minimum)
        minimum = l - lanterns[n-1];

    for (int i = 0; i < n - 1; i++)
    {
        long double d;
        d = (lanterns[i + 1] - lanterns[i]) / 2.0;
        if (d > minimum)
        {
            minimum = d;
        }
    }

    cout << fixed << setprecision(10) << minimum;

    return 0;
}
