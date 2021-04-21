//https://codeforces.com/problemset/problem/112/A

#include <bits/stdc++.h>
#include<algorithm>
#include <string>

using namespace std;

int main()
{
    string a,b;
    cin >> a >> b;

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    cout << a.compare(b);
    return 0;
}
