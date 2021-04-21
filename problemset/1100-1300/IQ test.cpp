//https://codeforces.com/problemset/problem/25/A

#include <iostream>

using namespace std;

int main()
{
    int n, numbers[105],even = 0, odd =0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> numbers[i];
        if (numbers[i] % 2 == 0)
        {
            even++;
        }
        else
            odd++;
    }

    if (even > 1)
    {
        for (int i = 1; i <= n ;i++)
        {
            if (numbers[i] % 2 == 1)
            {
                cout << i;
                return 0;
            }
        }
    }
    else
    {
        for (int i = 1; i <= n ;i++)
        {
            if (numbers[i] % 2 == 0)
            {
                cout << i;
                return 0;
            }
        }
    }


    return 0;
}
