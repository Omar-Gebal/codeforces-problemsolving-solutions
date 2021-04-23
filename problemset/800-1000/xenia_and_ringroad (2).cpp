//https://codeforces.com/problemset/problem/339/B

#include <iostream>
using namespace std;

int main()
{
    long long n,m, a = 1, cntr = 0;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        long long b;
        cin >> b;
        if (a <= b)
        {
            cntr += b - a;
        }
        else
        {
            cntr += (n - a) + b;
        }
        a = b;
    }

    cout << cntr;
    return 0;
}
