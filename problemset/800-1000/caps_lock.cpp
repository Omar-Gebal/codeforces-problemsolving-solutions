//https://codeforces.com/problemset/problem/131/A

#include <iostream>
#include <string>

using namespace std;

string reverseString(string input)
{
    for (int i = 0; i < input.length(); i++)
    {
        if(input[i] >= 'A' && input[i] <= 'Z')
        {
            input[i] += 32;
        }
        else
            input[i] -= 32;
    }
    return input;
}

int main()
{
    string word;
    cin >> word;
    bool isCaps = true;

    for (int i = 1; i < word.length(); i++)
    {
        if(word[i] >= 'A' && word[i] <= 'Z')
            continue;
        else
        {
            isCaps = false;
            break;
        }
    }

    if(isCaps)
        cout << reverseString(word);
    else
        cout << word;

    return 0;
}
