//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D

#include <iostream>

using namespace std;

void printN(long long n)
{
    if (n <= 0)
        return;

    printN(n/10);//recursion
    cout << n % 10 << ' ';//logic
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        if (x == 0)
        {
            cout << 0 << endl;
            continue;
        }
        printN(x);
        cout << endl;
    }

    return 0;
}
