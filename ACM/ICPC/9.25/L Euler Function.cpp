#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cstdlib>
using namespace std;

bool u[100005];
long long su[100005],num;

long long gcd(long long a,long long b)
{
	if(b==0) return a;
	return gcd(b,a%b);
}

void prepare()
{
	long long i,j,num=0;
	memset(u,true,sizeof(u));
	for(i=2;i<=100000;i++)
	{
		if(u[i]) su[++num]=i;
		for(j=1;j<=num;j++)
		{
//			if(i%1000==1) printf("%d\n",i);
			if(i*su[j]>100000) break;
			u[i*su[j]]=false;
			if(i%su[j]==0) break;
		}
	}
}

long long phi(long long x)
{
	long long ans=1;
	int i,j,k;
	for(i=1;i<=num;i++)
	{
		if(x%su[i]==0)
		{
			j=0;
			while(x%su[i]==0)
			{
				++j;
				x/=su[i];
			}
			for(k=1;k<j;k++)
			{
				ans=ans*su[i]%998244353;
				ans=ans*(su[i]-1)%998244353;
				if(x==1) break;
			} 
		}
	}
	if(x>1) ans=ans*(x-1)%998244353;
}

int main()
{
	prepare();
	int n,m,k,a,sum;
	int l,r,w;
	int x[105];
	long long ans=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>x[i];
	for(int i=1;i<=m;i++)
	{
		cin>>a;
		if(a==1)
		{
			sum=0;
			cin>>l>>r;
			for(int j=l;j<=r;j++)
			{
				sum+=phi(x[j]);
//				cout<<phi(x[j])<<endl;
			}
			cout<<sum<<endl;
		}
		else
		{
			cin>>l>>r>>w;
			for(int j=l;j<=r;j++)
				x[j]*=w;
//			for(int j=1;j<=n;j++)
//				cout<<x[j]<<endl;
		}
	}
	return 0;
}
