//https://codeforces.com/problemset/problem/466/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, a, b, special = 0, normal = 0;
    cin >> n >> m >> a >> b;
    if (b <= a * m)
    {
        special = n / m;
        if ( b <= (n % m) * a)
            special++;
        else
            normal = n %m;
    }
    else
        normal = n;

    cout << a * normal + b * special;

    return 0;
}
