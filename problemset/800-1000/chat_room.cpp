//https://codeforces.com/problemset/problem/58/A

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, h = "hello";
    int cntr = 0, start = 0;
    cin >> s;


    for (int j = 0; j < h.size(); j++)
    {
        if (s.find(h[j], start) != string::npos)
        {
            start = s.find(h[j], start);
            s[start] = 'x';
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
