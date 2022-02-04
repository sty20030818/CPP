#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int m, n, a, b;

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
	scanf("%d%d", &m, &n);
	for (int i = m; i <= n; ++i)
		for (int j = i; j >= 2; --j)
			if ((i % j == 0) && (isPrime(j))) 
			{
				printf("%d", j);
				if (i != n)
					printf(",");
				break;
			}
	return 0;
}
