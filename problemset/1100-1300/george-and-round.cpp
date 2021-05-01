//https://codeforces.com/problemset/problem/387/B

#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    long long n, m, answer = 0;
    vector <long long> round;
    vector <long long> prepared;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        round.push_back(x);
    }


    for (int i = 0; i < m; i++)
    {
        long long x;
        cin >> x;
        prepared.push_back(x);
    }

    sort(prepared.begin(), prepared.end());
    sort(round.begin(), round.end(), greater<int>());

    for (int i = 0; i < n; i++)
    {
        bool found = false;
        for (int j = 0; j < m; j++)
        {
            if (round[i] <= prepared[j])
            {
                prepared[j] = -1;
                found = true;
                break;
            }
        }
        if (!found)
            answer++;
    }

    cout << answer;
    return 0;
}
