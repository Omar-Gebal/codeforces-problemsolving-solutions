//https://codeforces.com/problemset/problem/479/A

#include <iostream>

using namespace std;

int main()
{
    int a ,b ,c, maximum = 0;
    cin >> a >> b >> c;

    if (a + b + c >= maximum)
        maximum = a + b + c;
    if (a + b * c >= maximum)
        maximum = a + b * c;
    if ((a + b) * c >= maximum)
        maximum = (a + b) * c;
    if (a * b * c >= maximum)
        maximum = a * b * c;
    if (a * b + c >= maximum)
        maximum = a * b + c;
    if (a * (b + c) >= maximum)
        maximum = a * (b + c);

    cout << maximum;


    return 0;
}
