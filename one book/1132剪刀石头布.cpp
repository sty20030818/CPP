#include <cstdio>
#include <iostream>
#include <string.h>
using namespace std;
char a[20],b[20];
int n;

int win(char a[],char b[])
{
    if(strcmp(a,"Rock")==0&&strcmp(b,"Scissors")==0)return 1;
    if(strcmp(b,"Rock")==0&&strcmp(a,"Scissors")==0)return 2;
    if(strcmp(a,"Rock")==0&&strcmp(b,"Paper")==0)return 2;
    if(strcmp(b,"Rock")==0&&strcmp(a,"Paper")==0)return 1;
    if(strcmp(a,"Scissors")==0&&strcmp(b,"Paper")==0)return 1;
    if(strcmp(b,"Scissors")==0&&strcmp(a,"Paper")==0)return 2;
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
	{
        scanf("%s%s",a,b);
        if(strcmp(a,b)==0)
        	printf("Tie\n");
        else
		{
            if(win(a,b)==1) printf("Player1\n");
            else printf("Player2\n");
        }
    }
    return 0;
}
