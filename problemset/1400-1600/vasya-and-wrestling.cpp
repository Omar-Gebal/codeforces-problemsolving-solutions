//https://codeforces.com/problemset/problem/493/B

#include <iostream>
#include <vector>


using namespace std;

int main()
{
    vector<long long> v1, v2 , v3;

    long long n, f1 = 0, f2 = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        v3.push_back(x);
        x > 0 ? f1 += x : f2 += -1 * x;
        x > 0 ? v1.push_back(x) : v2.push_back(-1 * x);
    }

    if (f1 == f2)
    {
        if (v1 > v2)
            cout << "first";
        else if (v2 > v1)
            cout << "second";
        else if (v3[n-1] > 0)
            cout << "first";
        else
            cout << "second";
        return 0;
    }

    f1 > f2 ? cout << "first": cout << "second";

    return 0;
}
