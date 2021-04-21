//https://codeforces.com/problemset/problem/50/A

#include <iostream>

using namespace std;

int main()
{
    int m,n, area, cntr = 0;
    cin >> m >> n;

    area = m * n;
    while (area >= 2)
    {
        area -=2;
        cntr++;
    }

    cout << cntr;

    return 0;
}
