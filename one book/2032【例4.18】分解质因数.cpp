#include<cstdio>
#include<cmath>
using namespace std;
int n,ans; 

bool isPrime(int shu)
{
	double n_sqrt=sqrt(shu);
	if(shu==1) return false;
	if(shu==2||shu==3) return true;
	if(shu%6!=1&&shu%6!=5) return false;
	for(int i=5;i<=n_sqrt;i+=6)
	    if(shu%i==0||shu%(i+2)==0) return false;
    return true;
}

int main()
{
	scanf("%d",&n);
	ans=n;
	printf("%d=",n);
	while(ans)
	{
		for(int i=2;i<=ans;i++)
		{
			if(ans%i==0)
			{
				if(isPrime(ans))
				{
					printf("%d",ans);
					return 0;
				}
				else
				{
					ans/=i;
					printf("%d*",i);
					break;
				}
			}
		}
	}
    return 0;
}
