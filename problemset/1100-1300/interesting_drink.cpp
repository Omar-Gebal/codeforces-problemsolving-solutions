//https://codeforces.com/problemset/problem/706/B

#include <iostream>
#include <algorithm>

using namespace std;


int countGreater(int arr[], int n, int k)
{
    int l = 0;
    int r = n - 1;

    int leftGreater = n;


    while (l <= r) {
        int m = l + (r - l) / 2;


        if (arr[m] > k) {
            leftGreater = m;
            r = m - 1;
        }

        else
            l = m + 1;
    }


    return (n - leftGreater);
}

int main()
{
    int n,x[100000+5],q;
    long long m;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x[i];

    }

    cin >> q;

    sort(x , x + n);

    for(int i = 0; i < q; i++)
    {
        cin >> m;
        cout << n - countGreater(x, n, m) << endl;
    }

    return 0;
}
