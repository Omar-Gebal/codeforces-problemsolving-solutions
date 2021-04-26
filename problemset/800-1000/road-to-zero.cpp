//https://codeforces.com/problemset/problem/1342/A

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x,y,a = 0,b = 0, sum1,sum2;
        cin >> x >> y >> a >> b;

        if (x == y && x == 0)
        {
            cout << 0 << endl;
            continue;
        }

        sum1 = a * (x + y);

        sum2 = b * min(x,y) + a * abs(x - y);

        if (sum1 < sum2)
            cout << sum1 << endl;
        else
            cout << sum2 << endl;

    }

    return 0;
}
