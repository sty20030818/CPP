#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int n,sum;
int sgn[101],a[101],b[101],c[101],ans[101];
int aaa=0,bbb=0;

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>sgn[i];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
	for(int i=0;i<n;i++)
		aaa+=pow(2,i)*a[i]*sgn[i];
	for(int i=0;i<n;i++)
		bbb+=pow(2,i)*b[i]*sgn[i];
	sum=aaa+bbb;
	if(sum<0)
	{
		for(int i=0;i<n;i++)
			sgn[i]=-sgn[i];
		sum=-sum;
	}
	int j=0;
	while(sum)
	{
		c[j]=sum%2;
		sum/=2;
		j++;
	}
	for(int i=0;i<n;i++)
	{
		if(c[i]==2)
		{
			c[i]=0;
			c[i+1]+=1;
		}
		if(sgn[i]==-1&&c[i]==1)
			c[i+1]+=1;
	}
	if(c[n]==1)
	{
		for(int i=0;i<=n;i++)
		{
			if(i==n) printf("%d",c[i]);
			else printf("%d ",c[i]);
		}
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(i==(n-1)) printf("%d",c[i]);
			else printf("%d ",c[i]);
		}
	}
	return 0;
}
