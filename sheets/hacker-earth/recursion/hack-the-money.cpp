//https://www.hackerearth.com/practice/basic-programming/recursion/recursion-and-backtracking/practice-problems/algorithm/hack-the-money/

#include <bits/stdc++.h>

using namespace std;

bool canHack(long long desired, long long current)
{
    if (desired == current) //base
        return true;
    else if (desired < current)
        return false;

    if(canHack(desired, current * 10) || canHack(desired, current * 20))
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long desired;
        cin >> desired;

        if(canHack(desired,1))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
