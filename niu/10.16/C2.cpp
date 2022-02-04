#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[3][3],i,j,x=1,y=0,x1,y1;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=0;
		}
	}
	a[x][y]=1;
	for(i=2;i<10;i++)
	{
		x1=x-1;y1=y-1;
		if(x1<0) x1=2;
		if(y1<0) y1=2;
		if(a[x1][y1]!=0)
		{
			x1=x;
			y1=y+1;
		}
		a[x1][y1]=i;
		x=x1;
		y=y1;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}