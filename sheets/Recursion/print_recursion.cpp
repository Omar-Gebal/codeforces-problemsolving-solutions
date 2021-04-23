//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A

#include <iostream>

using namespace std;

void printRecurion(int n)
{
    if (n <= 0)
        return;
    printRecurion(n - 1);
    cout << "I love Recursion\n";
}

int main()
{
    int n;
    cin >> n;
    printRecurion(n);
    return 0;
}
