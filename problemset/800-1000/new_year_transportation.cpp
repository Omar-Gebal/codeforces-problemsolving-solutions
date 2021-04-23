//https://codeforces.com/problemset?order=BY_SOLVED_DESC&tags=1000-1100

#include <iostream>

using namespace std;

long long n,t,position = 1,cells[30000+5];
int main()
{
    cin >> n >> t;
    for (int i = 1; i < n; i++)
    {
        cin >> cells[i];
    }

    for(int i = 1; i <= t; i+= cells[i])
    {
        if (i == t)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}
