#include<bits/stdc++.h>
using namespace std;
int n,a,b,i;
double ans1,ans2;

int main()
{
    scanf("%d",&n);
    scanf("%d%d",&a,&b);
    ans1=b*1.0/a;
    for(i=2;i<=n;i++)
	{
        scanf("%d%d",&a,&b);
        ans2=b*1.0/a;
        if(ans1-ans2>0.05) printf("worse\n");
        else if(ans2-ans1>0.05) printf("better\n");
        else printf("same\n");
    }
    return 0;
}
