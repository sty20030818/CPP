#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cstdlib>
using namespace std;

typedef long long ll;
bool u[100005];
ll su[100005],num;

ll gcd(ll a,ll b)
{
	if(b==0) return a;
	return gcd(b,a%b);
}

void prepare()
{
	ll i,j,num;
	memset(u,true,sizeof(u));
	for(i=2;i<=100000;i++)
	{
		if(u[i]) su[++num]=i;
		for(j=1;j<=num;j++)
		{
			if(i*su[j]>n) break;
			u[i*su[j]]=false;
			if(i%su[j]==0) break;
		}
	}
}

ll phi(ll x)
{
	ll ans=1;
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
	int n,i,j,k;
	int x[105];
	ll ans=1;
	cin>>n>>m;
	for(i=1;i<=n;i++)
		cin>>x[i];
	
	return 0;
}
