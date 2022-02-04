#include<bits/stdc++.h>
using namespace std;
int a[10][10],r[10],c[10];

int main()
{
    for(int i=1;i<=5;i++)
        for(int j=1;j<=5;j++)
            scanf("%d",&a[i][j]);
    for(int i=1;i<=5;i++)
	{
        r[i]=INT_MIN;
        for(int j=1;j<=5;j++)
            if(r[i]<a[i][j])r[i]=a[i][j];
    }
    for(int j=1;j<=5;j++)
	{
        c[j]=INT_MAX;
        for(int i=1;i<=5;i++)
            if(c[j]>a[i][j])c[j]=a[i][j];
    }
    bool find;
    for(int i=1;i<=5;i++)
        for(int j=1;j<=5;j++)
            if(a[i][j]==r[i]&&a[i][j]==c[j])
			{
				find=true;
				printf("%d %d %d\n",i,j,a[i][j]);
			}
    if(!find) printf("not found");
    return 0;
}
