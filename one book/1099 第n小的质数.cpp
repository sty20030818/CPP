#include<bits/stdc++.h>
using namespace std;
int n,k=2,cnt=1;

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
    while(cnt<n)
	{
        k++;
        while(isPrime(k)==0) k++;
        cnt++;
    }
    printf("%d",k);
    return 0;
}
