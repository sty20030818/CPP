#include<bits/stdc++.h>
using namespace std;
int a[10][10];

int  canplace(int n,int i)
{
	int j,k,flag=1;
	for(j=0;j<=8;j++)
	{
		if(a[n/3][j]==i)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
        for(j=0;j<=8;j++)
        {
            if(a[j][n%3]==i)
            {
            flag=0;
            break;
            }
        }
    }
    if(flag==1)
	{
		for(j=(n/3/3)*3;j<(n/3/3)*3+3;j++)
		{
			for(k=(n%3/3)*3;k<(n%3/3)*3+3;k++)
			{
				if(a[j][k]==i)
				{
					flag=0;
					break;
				}
				if(flag==0)break;
			}
		}
    }
	return flag;
}

void output()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	 
}

void search(int n)
{
	int i;
	if(n==3) output();
	else if(a[n/3][n%3]!=0) search(n+1);
	else if(a[n/3][n%3]==0)
	{ 
	
		for(i=1;i<=3;i++)
		{
		    if(canplace(n,i))
		    {
	        	a[n/3][n%3]=i;
			    search(n+1);
	        }
		    a[n/3][n%3]=0;
		}
	}
}

int main()
{
	char b[10][10];
	int q,j;
	for(q=0;q<3;q++)
	{
		for(j=0;j<=3;j++)
		{
			b[q][j]=0;
		}
	}
	for(int i=0;i<3;i++)
	{
		scanf("%c",&b[0][i]);
		if(b[q][j]!='\n')
			a[q][j]=b[q][j]-'0';
	}
	search(0);
	return 0;
}