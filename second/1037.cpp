#include <bits/stdc++.h>
using namespace std;
int p[5],a[5];

int main()
{
    scanf("%d.%d.%d",&p[0],&p[1],&p[2]);
    scanf("%d.%d.%d",&a[0],&a[1],&a[2]);
    if(a[2]>=p[2]) a[2]-=p[2];
    else
    {
        a[1]-=1;
        a[2]=a[2]+29-p[2];
    }
    if(a[1]>=p[1]) a[1]-=p[1];
    else
    {
        a[0]-=1;
        a[1]=a[1]+17-p[1];
    }
    a[0]-=p[0];
    if(a[0]<0)
    {
        if(a[2]>0)
        {
            a[1]+=1;
            a[2]=29-a[2];
        }
        if(a[1]>0)
        {
            a[0]+=1;
            a[1]=17-a[1];
        }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
    }
    printf("%d.%d.%d",a[0],a[1],a[2]);
    return 0;
}