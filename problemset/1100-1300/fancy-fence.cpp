//https://codeforces.com/problemset/problem/270/A

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        double a,x;
        cin >> a;
        x = (360 / (180 - a));
        if (x == (int) x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
