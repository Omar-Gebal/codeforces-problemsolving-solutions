//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F

#include <iostream>

using namespace std;

void printEvenIndices(int n, long long numbers[])
{
    if (n < 0)  //base
        return;
    if (n % 2 != 0)
        n--;

    if (n == 0) //logic
        cout << numbers[n];
    else
        cout << numbers[n] << ' ';

    printEvenIndices(n - 2, numbers);//recursion
}

int main()
{
    long long n,numbers[1000];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    printEvenIndices(n - 1, numbers);
    return 0;
}
