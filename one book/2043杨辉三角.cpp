#include<bits/stdc++.h>
using namespace std;
int a[101][101]; 
int i,j,n;

int main()
{
	scanf("%d",&n);
	a[1][1]=1;
	a[2][1]=a[2][2]=1;
	for(i=3;i<=n;i++)
		for(j=1;j<=i;j++)
			if(j==1||j==i) a[i][j]=1;
			else a[i][j]=a[i-1][j-1]+a[i-1][j];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}



