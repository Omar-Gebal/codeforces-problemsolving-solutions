//https://codeforces.com/problemset/problem/158/B

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,groups[100005],people[4]={};

	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>groups[i];
		people[groups[i]-1]++;
	}

	cout<<people[3]+people[2]+(max(0,people[0]-people[2])+people[1]*2+3)/4;
	return 0;
}
