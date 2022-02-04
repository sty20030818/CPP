#include <cstdio>
#include <cmath>
using namespace std;

#define N 1001
int prime[N];
int i,j,n,cns=0;
	
int main()
{
	scanf("%d",&n);
	prime[2]=1;
	for(i=3;i<N;i++)
	{
		if(i%2) prime[i]=1;
		else prime[i]=0;
	}
	for(i=3;i<=sqrt(N);i++)
	{
		if(prime[i]==1)
    		for(j=i*i;j<N;j+=i) prime[j]=0;
	}
	for(i=2;i<n;i++)
    {
    	if(prime[i]==1)
    	{
    		printf("%d\n",i);
		}
	}
	return 0;
}
