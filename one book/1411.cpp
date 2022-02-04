#include <bits/stdc++.h>
using namespace std;

int reverse_num(int n)
{
	int v=n,sum=0;
	while(v>0)
	{
		sum=sum*10+v%10;
		v/=10;
	}
	return sum;
}

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
   	int m,n;
   	int is_first=1,found=0;
   	scanf("%d%d",&m,&n);
   	
   	for(int i=m;i<=n;i++)
   	{
   		if(isPrime(i) && isPrime(reverse_num(i)))
   		{
   			found=1;
   			if(is_first)
   			{
   				printf("%d",i);
   				is_first=0;
			}
			else printf(",%d",i);
		}
	}
	if(!found) printf("No\n");
    return 0;
}