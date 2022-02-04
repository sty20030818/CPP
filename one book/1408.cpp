#include <bits/stdc++.h>
using namespace std;
int n,i,ans=0;

int palindrome(int n)
{
    int sum=0;
    while(n>0)
    {
        sum=sum*10+n%10;
        n/=10;
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
    cin>>n;
    for(i=11;i<=n;i++)
    {
        if(isPrime(i) && palindrome(i)==i)
            ans++;
    }
    printf("%d\n",ans);
    return 0;
}