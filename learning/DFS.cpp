#include <iostream>
using namespace std;

int m,n,p,q,minn = INT_MAX;
int a[101][101];  //1表示空地,2表示障碍物
int v[101][101];  //0表示未访问,1表示访问
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

void dfs(int x,int y,int step)
{
    if(x == p && y == q)
    {
        if(step < minn)
            minn = step;
        return;
    }
    //试探
    for(int k=0;k<4;k++)
    {
        int tx,ty;
        tx = x + dx[k];
        ty = y + dy[k];
        if(a[tx][ty] == 1 && v[tx][ty]==0)
        {
            v[tx][ty] = 1;
            //printf("%d %d\n",tx,ty);
            dfs(tx,ty,++step);
            v[tx][ty] = 0;
        }
        //printf("%d\n",step);
    }
    return;
}

int main()
{
    int startx,starty;
    scanf("%d %d",&m,&n);
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            scanf("%d",&a[i][j]);

    scanf("%d %d %d %d",&startx,&starty,&p,&q);
    v[startx][starty] = 1;
    dfs(startx,starty,0);

    printf("%d\n",minn);
    return 0;
}
/*
5 4
1 1 2 1
1 1 1 1
1 1 2 1
1 2 1 1
1 1 1 2
1 1 4 3
*/
