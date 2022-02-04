#include <cstdio>
using namespace std;
double a,b,c,d,x;

int main()
{
	scanf("%lf %lf %lf %lf %lf",&x,&a,&b,&c,&d);
	printf("%.7lf",a*x*x*x+b*x*x+c*x+d);
	return 0;
}