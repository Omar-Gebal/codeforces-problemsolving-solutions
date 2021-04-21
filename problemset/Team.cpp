//https://codeforces.com/problemset/problem/231/A

#include <iostream>

using namespace std;

int main()
{
    int n, solvedProblems = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int cntr = 0;
        for (int j = 0; j < 3; j++)
        {
            int solution;
            cin >> solution;
            if (solution == 1)
                cntr++;
        }
        if (cntr >= 2)
            solvedProblems++;
    }
    cout << solvedProblems;
    return 0;
}
