//https://codeforces.com/problemset/problem/118/A

#include<bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string input, answer;
    cin >> input;
    transform(input.begin(), input.end(), input.begin(), ::tolower);

    for(int i = 0; i < input.length(); i++)
    {
        if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u' || input[i] == 'y')
            continue;
        else
        {
            answer.push_back('.');
            answer.push_back(input[i]);
        }
    }

    cout << answer;
    return 0;
}
