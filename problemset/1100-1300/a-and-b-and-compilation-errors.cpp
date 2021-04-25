//https://www.hackerearth.com/practice/algorithms/graphs/graph-representation/practice-problems/algorithm/so-np-c559f406/

#include <iostream>

using namespace std;

int main()
{
    long long sum1 = 0, sum2 = 0, sum3 = 0;
    int n;
    cin >> n;

    long long a;

    for (int i = 0; i < n ; i++)
    {
        cin >> a;
        sum1 += a;
    }

    for (int i = 0; i < n - 1; i++)
    {
       cin >> a;
       sum2 += a;
    }

    for (int i = 0; i < n - 2; i++)
    {
       cin >> a;
       sum3 += a;
    }

    cout << sum1 - sum2 << endl << sum2 - sum3;
    return 0;
}
