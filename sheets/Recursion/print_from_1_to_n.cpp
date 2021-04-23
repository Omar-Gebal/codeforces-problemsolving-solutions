//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

#include <iostream>

using namespace std;

void printx(int n)
{
    if (n <= 0) //base
        return;

    printx(n-1);//recursion

    cout << n << endl;//logic

}

int main()
{
    int n;
    cin >> n;
    printx(n);
    return 0;
}
