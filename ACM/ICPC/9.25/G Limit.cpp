#include <cstdio>
#include <iostream>
using namespace std;
int n,t;
int a[100010],b[100010];

int main()
{
	scanf("%d %d",&n,&t);
	for(int i=0;i<n;i++)
		cin>>a[i]>>b[i];
	for(int i=0;i<n;i++)
		cout<<a[i]<<b[i]<<endl;
	return 0;
}
