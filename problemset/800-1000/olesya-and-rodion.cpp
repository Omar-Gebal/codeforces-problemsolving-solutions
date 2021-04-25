//https://codeforces.com/problemset/problem/584/A

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string t;
    cin >> n >> t;
    string number = "";

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (t == "10")
                number += '1';
            else
                number += t;
        }
        else
            number += '0';
    }

    if (n == 1 && t == "10")
        cout << -1;
    else
        cout << number;

    return 0;
}
