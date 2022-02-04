#include<iostream>
#include<cstdio>
using namespace std;

double hermite(int n,int x)
{
	if(n==0) return 1.0;
	if(n==1) return 2*x;
	if(n>1) return 2*x*hermite(n-1,x)-2*(n-1)*hermite(n-2,x);
} 

int main()
{
	int n,x;
	cin>>n>>x;
	printf("%.2lf",hermite(n,x));
	return 0;
}