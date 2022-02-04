#include <cstdio>
using namespace std;
double r1,r2;

int main()
{
	scanf("%lf %lf",&r1,&r2);
	printf("%.2lf",1/(1/r1+1/r2));
	return 0;
}