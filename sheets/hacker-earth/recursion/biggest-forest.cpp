//https://www.hackerearth.com/practice/basic-programming/recursion/recursion-and-backtracking/practice-problems/algorithm/biggest-forest-700592dd/

#include <bits/stdc++.h>

using namespace std;

char land[1000+5][1000+5];

int N, maximum = 0;

int countTrees(int i, int j)
{
    int cntr = 0;
    if (i < 0 || j < 0 || i >= N || j >= N) //base
    {
        return 0;
    }

    if (land[i][j] == 'T')
    {
        cntr++;
        land[i][j] = 'x';
        cntr += countTrees(i - 1, j);//count left
        cntr += countTrees(i, j - 1);//count down
        cntr += countTrees(i + 1, j);//count right
        cntr += countTrees(i, j + 1);//count up
    }
    return cntr;

}

int main()
{
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> land[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (land[i][j] == 'T')
            {
                int x = countTrees(i,j);
                if (x > maximum)
                    maximum = x;
            }
        }
    }

    cout << maximum;
    return 0;
}
