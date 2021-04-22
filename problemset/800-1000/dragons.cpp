//https://codeforces.com/problemset/problem/230/A

#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    long long s,n;

    //vector of pairs first = strength , second = bonus
    vector<pair<int, int>> dragons;
    cin >> s >> n;

    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;
        dragons.push_back({x,y});
    }

    sort(dragons.begin(), dragons.end());

    for (int i = 0; i < n; i++)
    {
        if (s > dragons[i].first)
        {
            s+= dragons[i].second;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}
