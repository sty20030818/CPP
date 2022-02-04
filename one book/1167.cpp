#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
double calculate(double x,double n)
{
    if(n==1) return x/(1+x);
    else return x/(n+calculate(x,n-1));
}
 
int main()
{
    double n,x;
    double result;
    cin>>x>>n;
    result=calculate(x,n);
    printf("%.2lf\n",result);
    return 0;
}
 
