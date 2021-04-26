//https://codeforces.com/problemset/problem/363/B

#include <iostream>

using namespace std;


long long fence[150000 + 5];
int main()
{
    long long n,k,sum = 0, index = 1, minimum = 2000000000;
    cin >> n >> k;

    for(int i = 1; i <= n; i++)
    {
        long long x;
        cin >> x;
        sum += x;
        fence[i] = sum;
    }

    if (n > k)
    {
        for(int i = 1; i <= n - (k - 1); i++)
        {
            sum = fence[i + (k - 1)] - fence[i - 1];

            if (sum <= minimum)
            {
                minimum = sum;
                index = i;
            }
        }
    }

    cout << index;

    return 0;
}
