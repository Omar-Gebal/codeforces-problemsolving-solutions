//https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int n,X = 0;
    string statement;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> statement;
        if (statement.find('+') != -1)
            X++;
        else
            X--;
    }

    cout << X;
    return 0;
}
