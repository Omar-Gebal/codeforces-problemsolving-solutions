//https://codeforces.com/problemset/problem/122/A

#include <iostream>

using namespace std;

bool isLucky(int number)
{
    bool lucky = true;
    while (number > 0)
    {
        if (number % 10 == 4 || number % 10 == 7)
        {
            number /= 10;
        }
        else
        {
            lucky = false;
            break;
        }
    }
    return lucky;
}

int main()
{
    int n;
    cin >> n;
    bool almost = false;

    for (int i = 1; i <= n; i++)
    {
        if (isLucky(i))
        {
            if (n % i == 0)
                almost = true;
        }
    }

    if (almost)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
