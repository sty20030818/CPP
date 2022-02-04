#include <iostream>
#include <cstdio>
#include <cmath>
#define precision_1 1e-12
#define precision_2 1e-6
using namespace std;

int main ()
{
    double a,b,c,x1,x2,delta;
    cin>>a>>b>>c;
    delta=b*b-4*a*c;
    if(delta<0&&fabs(delta)>precision_1)
        printf("No answer!\n");
    else if(fabs(delta)<precision_1)
    {
        x1=-b/(2*a);
        if(fabs(x1)<precision_2) printf("x1=x2=%.5lf\n",0);
        else printf("x1=x2=%.5lf\n",x1);
    }
    else
    {
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        if(fabs(x1)<precision_2)	x1=fabs(x1);
        if(fabs(x2)<precision_2)	x2=fabs(x2);
        if(x1<x2) printf("x1=%.5lf;x2=%.5lf",x1,x2);
        else printf("x1=%.5lf;x2=%.5lf",x2,x1);
    }
	return 0;
}

