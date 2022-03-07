#include<cstdio>
#include<cstdlib>
#include<queue>
#include<iostream>
using namespace std;
int dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
int ans=99999999;
int a[100][100];
int v[100][100];
int n,m,startx,starty,p,q;
struct node{
	int x;
	int y;
};
struct node s[100];

int top=0;
int cnt=1;

void dfs(int x,int y,int step)
{
	if(x==p && y==q)
	{
		cnt++;
		cout<<"第"<<cnt<<"组方案:"<<endl;
		if(step<ans)
			ans=step;
		for(int i=0;i<=top;i++)
		{
			cout<<s[i].x<<" "<<s[i].y<<endl;
		}

		return;
	}
	for(int k=0;k<4;k++)
	{
		int tx=x+dir[k][0];
		int ty=y+dir[k][1];

		if(tx<1||tx>n||ty<1||ty>m)
			continue;
		if(a[tx][ty]==0 && v[tx][ty]==0)
		{
			v[tx][ty]=1;
			top++;
			s[top].x = tx;
			s[top].y = ty;

			dfs(tx,ty,step+1);
			v[tx][ty]=0;
			top--;
		}
	}
}
int main()
{

	scanf("%d%d%d%d%d%d",&n,&m,&startx,&starty,&p,&q);


	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			scanf("%d",&a[i][j]);

	v[startx][starty]=1;
	s[0].x = startx;
	s[0].y = starty;

	dfs(startx,starty,0);
	printf("%d",ans);
	return 0;

}
