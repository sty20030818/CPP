#include<bits/stdc++.h>
using namespace std;
double a[310];
int n,i,j,k;
double Min=999999,Max=-999999,sum=0,avr,delta;

int main()
{
    scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
        scanf("%lf",&a[i]);
        if(a[i]<Min) Min=a[i],j=i;
        if(a[i]>Max) Max=a[i],k=i;
    }
    for(i=1;i<=n;i++)
        if(i==j||i==k) sum+=0;
        else sum+=a[i];
    avr=sum/(n-2);
    Max=-999999;
    for(i=1;i<=n;i++)
        if(i==j||i==k) continue;
        else{
            if(a[i]>=avr) delta=a[i]-avr;
            else delta=avr-a[i];
            if(delta>Max) Max=delta;
        }
    printf("%.2lf %.2lf",avr,Max);
    return 0;
}
