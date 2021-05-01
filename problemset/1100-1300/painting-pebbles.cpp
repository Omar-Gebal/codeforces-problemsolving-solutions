//https://codeforces.com/problemset/problem/509/B

#include<iostream>

using namespace std;

int main()
{
    int n, maximum = 0,minimum =1000 , colours[100 + 5], k, j;
	cin >> n >> k;

	for (int i = 0; i < n; i++)
    {
		cin>>colours[i];
		maximum = max(maximum, colours[i]);
		minimum = min(minimum, colours[i]);
	}

	if (maximum - minimum > k)
    {
		cout<<"NO"<<endl;
	}
	else
    {
        cout<<"YES"<<endl;

        for (int i = 0; i < n; i++)
        {
            for (j = 0; j < colours[i]; j++)
            {
                if (j < k)
                    cout << j + 1 << ' ';
                else
                    cout << j % k + 1 << ' ';
            }
            cout << endl;
        }
    }
}
