#include <bits/stdc++.h>
using namespace std;
int m,n,cnt;
int a[101][101],b[101][101];

int main()
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&b[i][j]);
	for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]==b[i][j])
                cnt++;
    printf("%.2lf",cnt*1.0*100/(m*n));
	return 0;
}

