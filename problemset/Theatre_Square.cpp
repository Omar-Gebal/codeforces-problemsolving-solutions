//https://codeforces.com/problemset/problem/1/A

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long double n,m,a;
    cin >> n >> m >> a;

    cout << (long long) ceil(n/a) *  (long long) ceil(m/a) << endl;


    return 0;
}
