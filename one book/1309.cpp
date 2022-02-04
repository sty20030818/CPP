#include <bits/stdc++.h>
using namespace std;
char s[1000];
int c[1000];
int reverse(int a[],int n)
{
	int i,j;
	for(i=0,j=n-1;i<=j;i++,j--)
	{
		if(a[i]!=a[j])
			return 0;
	}
	return 1;
}
int aplus(int a[],int n,int m)
{
	int *b,i,j,kc;
	b=(int *)malloc(sizeof(int)*1001);
	for(i=0;i<n;i++)
	b[n-1-i]=a[i];
	kc=0;
	for(i=0;i<n;i++)
	{
		a[i]=a[i]+b[i]+kc;
		kc=a[i]/m;
		a[i]=a[i]%m;
	}
	if(kc>0)
		a[n++]=kc;
	free(b);
	return n;
}

int stod(char s[],int a[])
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='A'&&s[i]<='F')
			a[i]=10+s[i]-'A';
		else
			a[i]=s[i]-'0';
	}
	return i;
}

int main()
{
	int n,i,p;
	scanf("%d",&p);
	scanf("%s",s);
	n=stod(s,c);
	for(i=0;i<30;i++)
	{
		n=aplus(c,n,p);
		if(reverse(c,n)==1)
		{
			printf("%d\n",i+1);
			break;
		}
	}
	if(i>=30)
		printf("Impossible\n");
	return 0;
}
