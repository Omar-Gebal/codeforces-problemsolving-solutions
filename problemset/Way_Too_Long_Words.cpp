//https://codeforces.com/problemset/problem/71/A

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        string word;
        cin >> word;
        if (word.length() > 10)
        {
            cout << word[0] << word.length() - 2 << word.back() << endl;
        }
        else
            cout << word << endl;

    }
    return 0;
}
