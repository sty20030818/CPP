#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int maxx,a,b,c;
double m;

int Max(int a,int b,int c)
{
	if(a>b) maxx=a;
	else maxx=b;
	if(maxx<c) maxx=c;
	return maxx; 
}

int main()
{
	cin>>a>>b>>c;
	m=Max(a,b,c)*1.0/(Max(a+b,b,c)*Max(a,b,b+c));
	printf("%.3lf",m);
	return 0;
}
