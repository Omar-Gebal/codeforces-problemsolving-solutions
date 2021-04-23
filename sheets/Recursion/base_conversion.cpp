//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/E

#include <iostream>

using namespace std;

void binary(long long n)
{
    if(n <= 0)  //base
        return;

    binary(n/2);//recursion

    cout << n % 2;//logic
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        if(n == 0)
        {
            cout << 0 << endl;
            continue;
        }
        binary(n);
        cout << endl;
    }
    return 0;
}
