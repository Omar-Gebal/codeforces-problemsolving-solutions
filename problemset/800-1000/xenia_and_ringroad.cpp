//https://codeforces.com/problemset/problem/339/B

#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int n,m,start,finish, minimum;
    cin >> n >> m;
    int a[100000+5];

    for(int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    sort(a, a + m);

    for(int i = 0; i < m; i++)
    {
        cout  << a[i] << '  ';
    }

    return 0;
}
