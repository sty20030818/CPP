#include<iostream>
#include<cstdio>
using namespace std;
int row,col,i,j,cmd;

int main()
{
    char s[2];
    scanf("%d%d%s%d",&row,&col,s,&cmd);
    if(cmd==1)
    {
    	for(i=1;i<=row;i++)
		{
            for(j=1;j<=col;j++) printf("%c",s[0]);
            printf("\n");
        }
	}
    else
	{
        for(j=1;j<=col;j++) printf("%c",s[0]);
        printf("\n");
        for(i=2;i<=row-1;i++)
		{
            for(j=1;j<=col;j++)
                if(j==1||j==col)
                    printf("%c",s[0]);
                else
                    printf(" ");
            printf("\n");
        }
        for(j=1;j<=col;j++)
            printf("%c",s[0]);
        printf("\n");
    }
    return 0;
