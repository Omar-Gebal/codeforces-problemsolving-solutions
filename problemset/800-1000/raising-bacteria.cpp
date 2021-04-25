//https://codeforces.com/problemset/problem/579/A

#include <iostream>

using namespace std;

int main()
{
    long long n, cntr = 0;
    cin >> n;

    while (n > 0)
    {
        cntr += n % 2;
        n /= 2;
    }
    cout << cntr;
    return 0;
}
