//https://codeforces.com/problemset/problem/379/A

#include <iostream>

using namespace std;

int main()
{
    int a,b,cntr = 0;

    cin >> a >> b;
    cntr = a;

    while(a >= b)
    {
        cntr += a/b;
        a = a / b + (a % b);
    }


    cout << cntr;
    return 0;
}
