//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

#include <iostream>

using namespace std;

void printx(int n)
{
    if (n <= 0) //base
        return;
    if (n == 1)
        cout << n;
    else
        cout << n << ' ';//logic

    printx(n-1);//recursion
}

int main()
{
    int n;
    cin >> n;
    printx(n);
    return 0;
}
