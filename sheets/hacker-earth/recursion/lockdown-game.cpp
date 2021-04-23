//https://www.hackerearth.com/practice/basic-programming/recursion/recursion-and-backtracking/practice-problems/algorithm/lockdown-game/

#include <bits/stdc++.h>
#include <queue>

using namespace std;

int winner (string song, queue<int> people)
{
    if(people.size() == 1)      //base
        return people.front();

    if (song[0] == 'y')
    {
        people.pop();
        return winner(song.substr(1) + song[0], people);
    }
    else
    {
        int x = people.front();

        people.pop();

        people.push(x);

        return winner(song.substr(1) + song[0], people);
    }

}

int main() {
	int N;
	string S;
	queue<int> people;
	cin >> N >> S;

	for (int i = 1; i <= N; i++)
    {
        people.push(i);
    }

    cout << winner(S, people);

	return 0;
}
