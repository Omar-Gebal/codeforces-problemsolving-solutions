#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    //when int is 1 means new user,
    map <string ,int> system;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        if (system[name] == 0)
        {
            cout << "OK" << endl;
        }
        system[name]++;
        if (system[name] > 1)
        {
            cout << name << system[name] - 1 << endl;
        }

    }
    return 0;
}
