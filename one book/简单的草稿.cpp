#include <bits/stdc++.h>
using namespace std;
int n,cnt;

struct node
{
	char name[10];
	double t;
	int ke;
}person[1000];

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>person[i].name>>person[i].t>>person[i].ke;
	for(int i=0;i<n;i++)
	{
		if(person[i].t>=37.5 && person[i].ke)
		{
			cout<<person[i].name<<endl;
			cnt++;
		}
	}
	cout<<cnt;
    return 0;
}
 
