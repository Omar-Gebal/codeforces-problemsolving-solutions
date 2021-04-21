//https://codeforces.com/problemset/problem/158/A

#include <iostream>

using namespace std;
int scores[105];
int main()
{
    int n,k, cntr = 0;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        cin >> scores[i];
    }

    int i = k;
    if (scores[k] <= 0)
    {

        while (scores[i] == 0 && i > 0)
        {
            i--;
        }
        cout << i;

    }
    else
    {
        while (scores[i] >= scores[k])
        {
            i++;
        }
        cout << i - 1;

    }


    return 0;
}
